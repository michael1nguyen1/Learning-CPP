#pragma once

#include <exception>
#include <stdexcept> 
#include <algorithm>

template <typename T>
typename T::iterator easyFind (T& con, int num){
	typename T::iterator it = std::find(con.begin(), con.end(), num);

	if (it != con.end())
		return it;
	else
		throw std::out_of_range("Value is not in the container");
}
