#pragma once

template<typename T>
class Array{
    public:
        Array() : data(nullptr), length(0) {}

        Array(unsigned int n) : length(n){
            data = new T[n]();
        }

		Array(const Array& other) : length(other.length){
			data = new T[other.length];
			for (size_t i = 0; i < other.length; i++)
				data[i] = other.data[i];
		}

		Array& operator=(const Array& other){
			if (this != &other){
				T* temp = new T[other.length];
				for (size_t i = 0; i < other.length; i++)
					temp[i] = other.data[i];
				delete[] data;
				data = temp;
				length = other.length;
			}
			return *this;
		}

		T &operator[](size_t i) {
			if (i >= length)
				throw IndexOutOfBoundsException();
			return data[i];
		}
		~Array(){ delete [] data;}

		size_t getLength() const { return length; }
   
		class IndexOutOfBoundsException : public std::exception{
			const char *what(void) const noexcept { return "Index out of bounds"; };
		};

    private:
        T *data;
        size_t length;

};