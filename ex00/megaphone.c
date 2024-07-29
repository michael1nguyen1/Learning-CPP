#include <iostream>
#include <string>

int main(int c, char **v)
{
    for (int i = 0; v[i]; ++i)
    {
        std :: string str = v[i];
        std :: toupper(str);
        std :: cout << str << std :: endl;
    }
    return (0);
}