#include <iostream>
#include <string>
#include "Iter.hpp"

void printint(int i){
    std::cout << "int is: " << i <<std::endl;
}

void printstring(std::string str){
    std::cout << "String is: " << str <<std::endl;
}

int main( void ) {
    std::string strArray[3] = {"one", "two", "three"};
    ::iter(strArray, 3, printstring);
    
    int array[5] = {1, 2, 3, 4, 5};
    ::iter(array, 5, printint);
}