#include "PmergeMe.hpp"

void PmergeMe::fordJohnsonMe(std::vector<int>& vec, std::deque<int>& deq) {
    // Base cases
    if (vec.size() <= 1) {
        return; // Already sorted
    }
    
    // Handle odd element if present
    bool hasLonely = false;
    
    if (vec.size() % 2 != 0) {
        vecLonelyNum = vec.back();
        vec.pop_back();
        deqLonelyNum = deq.back();
        deq.pop_back();
        hasLonely = true;
    }
    
    // Step 1: Form pairs and order them (larger first)
    std::vector<std::pair<int, int>> vecPairs;
    std::deque<std::pair<int, int>> deqPairs;
    
    for (size_t i = 0; i < vec.size(); i += 2) {
        int a = vec[i];
        int b = vec[i+1];
        
        if (a < b) {
            vecPairs.push_back({b, a});
        } else {
            vecPairs.push_back({a, b});
        }
        
        a = deq[i];
        b = deq[i+1];
        
        if (a < b) {
            deqPairs.push_back({b, a});
        } else {
            deqPairs.push_back({a, b});
        }
    }
    
    // Step 2: Extract larger elements for recursive sorting
    std::vector<int> vecLarger;
    std::deque<int> deqLarger;
    
    for (const auto& pair : vecPairs) {
        vecLarger.push_back(pair.first);
    }
    
    for (const auto& pair : deqPairs) {
        deqLarger.push_back(pair.first);
    }
    
    // Step 3: Recursively sort the larger elements
    fordJohnsonMe(vecLarger, deqLarger);
    
    // Step 4: Rebuild our containers with just the sorted larger elements
    vec.clear();
    deq.clear();
    
    for (size_t i = 0; i < vecLarger.size(); i++) {
        vec.push_back(vecLarger[i]);
        deq.push_back(deqLarger[i]);
    }
    
    // Debug: Print the sorted larger elements
    std::cout << "Sorted larger elements: ";
    for (auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    
    // Step 5: Insert the smaller elements using binary insertion
    // For simplicity, we'll insert them in order for this example
    for (size_t i = 0; i < vecPairs.size(); i++) {
        int smallVec = vecPairs[i].second;
        int smallDeq = deqPairs[i].second;
        
        // Binary search to find insertion position
        size_t pos = binarySearch(vec, smallVec);
        
        // Insert at the found position
        vec.insert(vec.begin() + pos, smallVec);
        deq.insert(deq.begin() + pos, smallDeq);
    }
    
    // Step 6: Insert the lonely element if it exists
    if (hasLonely) {
        size_t pos = binarySearch(vec, vecLonelyNum);
        vec.insert(vec.begin() + pos, vecLonelyNum);
        deq.insert(deq.begin() + pos, deqLonelyNum);
    }
}

// Helper function for binary search
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