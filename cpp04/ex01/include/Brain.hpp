#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
    public:
        Brain();
        Brain(const Brain&);
        Brain& operator=(const Brain&);
        ~Brain();
    
    protected:
        std::string idea[100];
};




#endif