#include <iostream>
int main()
{
    int number = 2;
    std::cout << "enter number if odd or even = ";
    std::cin >> number;
    number % 2 == 0 ? std::cout << "EVEN" : std::cout << "ODD";
    return 0;
}