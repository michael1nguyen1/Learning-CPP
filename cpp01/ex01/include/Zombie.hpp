#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    public:

    Zombie(){};
    Zombie(std::string name) : name(name){};
    
    private:

    std::string name;
};
#endif