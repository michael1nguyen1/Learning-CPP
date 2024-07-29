#include <iostream>
#include <string>

int main(int c, char **v)
{
    for (int i = 1; v[i]; i++)
    {
        std::string str = v[i];
        for (auto& c : str) 
    		c = std::toupper(c);
        std::cout << str << ' ';
    }
	std::cout << std::endl;
    return (0);
}
