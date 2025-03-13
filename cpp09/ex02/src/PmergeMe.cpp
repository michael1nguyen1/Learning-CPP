#include "PmergeMe.hpp"

void PmergeMe::fordJohnsonMe(std::vector<int>& vec, std::deque<int>& deq) {
    if (vec.size() <= 1) {
        return; // Already sorted
    }
    
    // Handle odd element if present    
    if (vec.size() % 2 != 0) {
        vecLonelyNum = vec.back();
        vec.pop_back();
        deqLonelyNum = deq.back();
        deq.pop_back();
        _hasLonely = true;
    }
    std::vector<std::pair<int, int>> _vecPairs;
    std::vector<std::pair<int, int>> _deqPairs;
    
    for (size_t i = 0; i < vec.size(); i += 2) {
        int a = vec[i];
        int b = vec[i+1];
        
        if (a < b)
            _vecPairs.push_back({b, a});
        else
            _vecPairs.push_back({a, b});
        a = deq[i];
        b = deq[i+1];
        if (a < b)
            _deqPairs.push_back({b, a});
        else
            _deqPairs.push_back({a, b});
    }
    
    // Step 2: Extract larger elements for recursive sorting
    std::vector<int> _vecLarger;
    std::deque<int> _deqLarger;
    
    for (const auto& pair : _vecPairs) {
        _vecLarger.push_back(pair.first);
    }
    
    for (const auto& pair : _deqPairs) {
        _deqLarger.push_back(pair.first);
    }
    
    // std::cout << "printing\n";
    // for(auto&pair : _vecPairs)
    //     std::cout << pair.first << " ";
    // std::cout << std::endl;
    
    // Step 3: Recursively sort the larger elements
    fordJohnsonMe(_vecLarger, _deqLarger);
    vec.clear();
    deq.clear();
    
    for (size_t i = 0; i < _vecLarger.size(); i++) {
        vec.push_back(_vecLarger[i]);
        deq.push_back(_deqLarger[i]);
    }
    
    // Debug: Print the sorted larger elements
    std::cout << "Sorted larger elements: ";
    for (auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    
    // Step 5: Insert the smaller elements using binary insertion
    // For simplicity, we'll insert them in order for this example
    for (size_t i = 0; i < _vecPairs.size(); i++) {
        int smallVec = _vecPairs[i].second;
        int smallDeq = _deqPairs[i].second;
        
        // Binary search to find insertion position
        size_t pos = binarySearch(vec, smallVec);
        
        // Insert at the found position
        vec.insert(vec.begin() + pos, smallVec);
        deq.insert(deq.begin() + pos, smallDeq);
    }
    
    // Step 6: Insert the lonely element if it exists
    if (_hasLonely) {
        size_t pos = binarySearch(vec, vecLonelyNum);
        vec.insert(vec.begin() + pos, vecLonelyNum);
        deq.insert(deq.begin() + pos, deqLonelyNum);
    }
}

size_t PmergeMe::binarySearch(const std::vector<int>& vec, int value) {
    size_t left = 0;
    size_t right = vec.size();
    
    while (left < right) {
        size_t mid = left + (right - left) / 2;
        if (vec[mid] < value) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    return left;
}