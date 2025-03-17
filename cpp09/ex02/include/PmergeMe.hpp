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
		PmergeMe(const PmergeMe&);
		PmergeMe& operator=(const PmergeMe&);
		~PmergeMe() = default;

		void fordJohnsonMe(std::vector<int>&);
		void fordJohnsonMe(std::deque<int>& deq);

		private:
			std::vector<int> _jacobSeq;
};