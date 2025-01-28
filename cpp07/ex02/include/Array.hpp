#pragma once

template<typename T>
class Array{
    public:
        Array() : data(nullptr), length(0) {std::cout << "create \n";}
        Array(unsigned int n) : length(n){
            data = new T[n]();
        }
		Array(const Array& other){
			data = other.data;
			length = other.length;
		}
		Array& operator=(const Array& other){
			if (this == &other)
				return *this;
			delete[] data;
			data = new T[other.length];
			for (size_t i = 0; i < other.length; i++)
				this->data[i] = other.data[i];
			return *this;
		}
		T &operator[](size_t i) {
			if (i >= length)
				throw IndexOutOfBoundsException();
			return data[i];
		}
		~Array(){}
		size_t size() { return length; }
    private:
        T *data;
        size_t length;

	class IndexOutOfBoundsException : public std::exception{
		const char *what(void) const noexcept { return "Index out of bounds"; };
	};
};