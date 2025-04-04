#include "PmergeMe.hpp"

PmergeMe::PmergeMe(const int& size){
    _jacobSeq.push_back(0);
    _jacobSeq.push_back(1);
        
        int i = 2;
        while (_jacobSeq.back() < size) {
            _jacobSeq.push_back(_jacobSeq[i-1] + 2 * _jacobSeq[i-2]);
            i++;
        }
}

PmergeMe::PmergeMe(const PmergeMe& other) : _jacobSeq(other._jacobSeq) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other){
	if (this != &other)
		_jacobSeq = other._jacobSeq;
	return *this;
}

void PmergeMe::fordJohnsonMe(std::vector<int>& vec) {
    int lonelyNum = -1;
    bool hasLonely = false;

    //base condition for recursion
    if (vec.size() <= 1)
        return;
    
    // Handle odd element  
    if (vec.size() % 2 != 0) {
        lonelyNum = vec.back();
        vec.pop_back();
        hasLonely = true;
    }

	// Create sorted pairs of elements according to the larger number and extract larger elements for recursive sorting
    std::vector<std::pair<int, int>> vecPairs;
	std::vector<int> vecLarger;
	std::vector<size_t> indices;
    for (size_t i = 0; i < vec.size(); i += 2) {
        int a = vec[i];
        int b = vec[i+1];
        vecPairs.emplace_back(std::max(a, b), std::min(a, b));
		vecLarger.push_back(std::max(a, b));
		indices.push_back(i/2);
    }
    
    //Recursively sort the larger elements
    fordJohnsonMe(vecLarger);
	
	//sort the pairs based on the larger number
	std::vector<std::pair<int, int>> sortedPairs;
	for (size_t idx : indices) {
		sortedPairs.push_back(vecPairs[idx]);
	}
	vecPairs = sortedPairs;
    
	//store the sorted larger elements back into the original vector
	vec.clear();
    for (size_t i = 0; i < vecLarger.size(); i++){
        vec.push_back(vecLarger[i]);
	}

    // Insert the smaller elements using binary insertion
	if (!vecPairs.empty()) {
		int smallNum = vecPairs[0].second;
		auto pos = std::lower_bound(vec.begin(), vec.end(), smallNum);
		vec.insert(pos, smallNum);
	}

	//first round of small numbers
	std::vector<bool> tracker (vecPairs.size(), false);
	tracker[0] = true;
	for (size_t i = 1, index = _jacobSeq[i]; index < vecPairs.size(); index = _jacobSeq[++i]) {
		if(!tracker[index]){
			int smallNum = vecPairs[index].second;
			auto pos = std::lower_bound(vec.begin(), vec.begin() + index + i, smallNum);
			vec.insert(pos, smallNum);
			tracker[index] = true;
		}
    }

	//second round of small numbers
	for (size_t i = 1; i < vecPairs.size(); i++){
		if (!tracker[i]){
			int smallNum = vecPairs[i].second;
			auto pos = std::lower_bound(vec.begin(), vec.end(), smallNum);
			vec.insert(pos, smallNum);
		}
	}
    
    // Insert the lonely element if it exists
    if (hasLonely) {
        auto pos = std::lower_bound(vec.begin(), vec.end(), lonelyNum);
        vec.insert(pos, lonelyNum);
    }
}

void PmergeMe::fordJohnsonMe(std::deque<int>& deq) {
    int lonelyNum = -1;
    bool hasLonely = false;

    // Base condition for recursion
    if (deq.size() <= 1)
        return;

    // Handle odd element
    if (deq.size() % 2 != 0) {
        lonelyNum = deq.back();
        deq.pop_back();
        hasLonely = true;
    }

    // Create sorted pairs of elements according to the larger number and extract larger elements for recursive sorting
    std::deque<std::pair<int, int>> deqPairs;
    std::deque<int> deqLarger;
    std::deque<size_t> indices;
    for (size_t i = 0; i < deq.size(); i += 2) {
        int a = deq[i];
        int b = deq[i + 1];
        deqPairs.emplace_back(std::max(a, b), std::min(a, b));
        deqLarger.push_back(std::max(a, b));
        indices.push_back(i / 2);
    }

    // Recursively sort the larger elements
    fordJohnsonMe(deqLarger);

	//sort the pairs based on the larger number
    std::deque<std::pair<int, int>> sortedPairs;
    for (size_t idx : indices) {
        sortedPairs.push_back(deqPairs[idx]);
    }
    deqPairs = sortedPairs;

    // Store the sorted larger elements back into the original deque
    deq.clear();
    for (size_t i = 0; i < deqLarger.size(); i++) {
        deq.push_back(deqLarger[i]);
    }

    // Insert the smaller elements using binary insertion
    if (!deqPairs.empty()) {
        int smallNum = deqPairs[0].second;
        auto pos = std::lower_bound(deq.begin(), deq.end(), smallNum);
        deq.insert(pos, smallNum);
    }

    // First round of small numbers
    std::deque<bool> tracker(deqPairs.size(), false);
    tracker[0] = true;
    for (size_t i = 1, index = _jacobSeq[i]; index < deqPairs.size(); index = _jacobSeq[++i]) {
        if (!tracker[index]) {
            int smallNum = deqPairs[index].second;
            auto pos = std::lower_bound(deq.begin(), deq.begin() + index + i, smallNum);
            deq.insert(pos, smallNum);
            tracker[index] = true;
        }
    }

    // Second round of small numbers
    for (size_t i = 1; i < deqPairs.size(); i++) {
        if (!tracker[i]) {
            int smallNum = deqPairs[i].second;
            auto pos = std::lower_bound(deq.begin(), deq.end(), smallNum);
            deq.insert(pos, smallNum);
        }
    }

    // Insert the lonely element if it exists
    if (hasLonely) {
        auto pos = std::lower_bound(deq.begin(), deq.end(), lonelyNum);
        deq.insert(pos, lonelyNum);
    }
}