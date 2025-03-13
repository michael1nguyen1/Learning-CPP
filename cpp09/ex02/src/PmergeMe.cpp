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

void PmergeMe::fordJohnsonMe(std::vector<int>& vec) {
    
    int lonelyNum = -1;
    bool hasLonely = false;

    //base condition
    if (vec.size() <= 1)
        return;
    
    // Handle odd element  
    if (vec.size() % 2 != 0) {
        lonelyNum = vec.back();
        vec.pop_back();
        hasLonely = true;
    }

    std::vector<std::pair<int, int>> vecPairs;

    for (size_t i = 0; i < vec.size(); i += 2) {
        int a = vec[i];
        int b = vec[i+1];
        
        if (a < b)
            vecPairs.push_back({b, a});
        else
            vecPairs.push_back({a, b});
    }
    
    // Extract larger elements for recursive sorting
    std::vector<int> vecLarger;

    for (const auto& pair : vecPairs) {
        vecLarger.push_back(pair.first);
    }
    
    //Recursively sort the larger elements
    fordJohnsonMe(vecLarger);
    vec.clear();
    
    for (size_t i = 0; i < vecLarger.size(); i++)
        vec.push_back(vecLarger[i]);
    
    // std::cout << "Sorted larger elements: ";
    // for (auto& element : vec) {
    //     std::cout << element << " ";
    // }
    // std::cout << std::endl;
    
    // Insert the smaller elements using binary insertion
    for (size_t i = 0; i < vecPairs.size(); i++) {
        int smallVec = vecPairs[i].second;

        auto pos = std::lower_bound(vec.begin(), vec.end(), smallVec);
        vec.insert(pos, smallVec);
    }
    
    // Insert the lonely element if it exists
    if (hasLonely) {
        auto pos = std::lower_bound(vec.begin(), vec.end(), lonelyNum);
        vec.insert(pos, lonelyNum);
    }

    std::cout << "Sorted larger elements: ";
    for (auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::fordJohnsonMe(std::deque<int>& deq){

    int lonelyNum = -1;
    bool hasLonely = false;

    if (deq.size() <= 1)
        return;

    if (deq.size() % 2 != 0) {
        lonelyNum = deq.back();
        deq.pop_back();
        hasLonely = true;
    }

    std::vector<std::pair<int, int>> deqPairs;
    
    for (size_t i = 0; i < deq.size(); i += 2) {
        int a = deq[i];
        int b = deq[i+1];
        
        if (a < b)
            deqPairs.push_back({b, a});
        else
            deqPairs.push_back({a, b});
    }
    
    // Extract larger elements for recursive sorting
    std::deque<int> deqLarger;
    
    for (const auto& pair : deqPairs)
        deqLarger.push_back(pair.first);
    
    //Recursively sort the larger elements
    fordJohnsonMe(deqLarger);
    deq.clear();
    
    for (size_t i = 0; i < deqLarger.size(); i++)
        deq.push_back(deqLarger[i]);
    
    // std::cout << "Sorted larger elements: ";
    // for (auto& element : vec) {
    //     std::cout << element << " ";
    // }
    // std::cout << std::endl;
    
    // Insert the smaller elements using binary insertion
    for (size_t i = 0; i < deqPairs.size(); i++) {
        int smallDeq = deqPairs[i].second;
        
        auto pos1 = std::lower_bound(deq.begin(), deq.end(), smallDeq);
        size_t index = std::distance (deq.begin(), pos1);
        deq.insert(deq.begin() + index, smallDeq);
    }
    
    // Insert the lonely element if it exists
    if (hasLonely) {
        auto pos1 = std::lower_bound(deq.begin(), deq.end(), lonelyNum);
        size_t index = std::distance (deq.begin(), pos1);
        deq.insert(deq.begin() + index, lonelyNum);
    }

    std::cout << "Sorted larger elements: ";
    for (auto& element : deq) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}