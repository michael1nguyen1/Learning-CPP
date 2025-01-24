#pragma once

template<typename T>
class Array{
    public:
        Array() : data(nullptr), length(0) {}
        Array(unsigned int n) : length(n){
            data = new T[n]();
        }
    private:
        T *data;
        size_t length;
};