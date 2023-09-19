#include <iostream>
namespace first
{
    int x = 1;

}
namespace second
{
    int x = 2;

}
int main()
{

    int x = 0;
    std::cout << "x in the main " << x << std::endl;
    std::cout << "x in the namespace first = " << first::x << std::endl;
    std::cout << "x in the namespace second = " << second::x << std::endl;
    return 0;
}