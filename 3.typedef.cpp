#include <iostream>

// typedef std::string Text_t;
// typedef int number_t;
using number_t = int;
using Text_t = std::string;

/*
    We use using becuse of nowadays using is use as comapare
    to typedef
*/

int main()
{
    number_t a = 0;
    Text_t name = "c++";
    std::cout << name << " = " << a;
    return 0;
}