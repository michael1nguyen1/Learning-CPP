#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>

class PmergeMe{
	public:
		PmergeMe() = delete;
		PmergeMe(const int&);
		PmergeMe(const PmergeMe&) = delete;
		PmergeMe& operator=(const PmergeMe&) = delete;
		~PmergeMe() = default;

		void fordJohnsonMe(std::vector<int>&);
		void fordJohnsonMe(std::deque<int>& deq);

		private:
			std::deque<int> _deqLarger;
			std::vector<int> _vecLarger;
			std::vector<int> _jacobSeq;
};