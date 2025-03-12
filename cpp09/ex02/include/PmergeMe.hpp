#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>

class PmergeMe{
	public:
		PmergeMe() = default;
		PmergeMe(const PmergeMe&) = delete;
		PmergeMe& operator=(const PmergeMe&) = delete;
		~PmergeMe() = default;

		void fordJohnsonMe(std::vector<int>&, std::deque<int>&);
		// void sortpairs(std::vector<int>&, std::deque<int>&);
		// size_t getVectorSize() const;
		// size_t getDequeSize() const;
		size_t binarySearch(const std::vector<int>& vec, int value);

		
		private:
			std::vector<std::pair<int, int>> _dequePairs;
			std::vector<std::pair<int, int>> _vectorPairs;
			std::deque<int> _dequeData;
			std::vector<int> _vectorData;
			int vecLonelyNum = -1;
			int deqLonelyNum = -1;
};