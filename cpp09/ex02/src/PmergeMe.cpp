#include "PmergeMe.hpp"

void PmergeMe::fordJohnsonMe(std::vector<int>& vec, std::deque<int>& deq) {
    
    //base condition
    if (vec.size() <= 1) {
        return;
    }
    
    // Handle odd element  
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
    
    // Extract larger elements for recursive sorting
    std::vector<int> _vecLarger;
    std::deque<int> _deqLarger;
    
    for (const auto& pair : _vecPairs) {
        _vecLarger.push_back(pair.first);
    }
    
    for (const auto& pair : _deqPairs) {
        _deqLarger.push_back(pair.first);
    }
    
    //Recursively sort the larger elements
    fordJohnsonMe(_vecLarger, _deqLarger);
    vec.clear();
    deq.clear();
    
    for (size_t i = 0; i < _vecLarger.size(); i++) {
        vec.push_back(_vecLarger[i]);
        deq.push_back(_deqLarger[i]);
    }
    
    // std::cout << "Sorted larger elements: ";
    // for (auto& element : vec) {
    //     std::cout << element << " ";
    // }
    // std::cout << std::endl;
    
    // Insert the smaller elements using binary insertion
    for (size_t i = 0; i < _vecPairs.size(); i++) {
        int smallVec = _vecPairs[i].second;
        int smallDeq = _deqPairs[i].second;
        
        auto pos = std::lower_bound(vec.begin(), vec.end(), smallVec);
        vec.insert(pos, smallVec);
        
        auto pos1 = std::lower_bound(deq.begin(), deq.end(), smallDeq);
        size_t index = std::distance (deq.begin(), pos1);
        deq.insert(deq.begin() + index, smallDeq);
    }
    
    // Insert the lonely element if it exists
    if (_hasLonely) {
        auto pos = std::lower_bound(vec.begin(), vec.end(), vecLonelyNum);
        vec.insert(pos, vecLonelyNum);
        
        auto pos1 = std::lower_bound(deq.begin(), deq.end(), deqLonelyNum);
        size_t index = std::distance (deq.begin(), pos1);
        deq.insert(deq.begin() + index, deqLonelyNum);
    }
    std::cout << "Sorted larger elements: ";
    for (auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}