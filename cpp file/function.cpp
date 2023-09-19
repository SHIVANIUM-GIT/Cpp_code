#include <iostream>

void HiThere(std::string name, int number)
{
    std::cout << "your name is =  " << name << '\n';
    std::cout << "your age is = " << number << '\n';
}
int main()
{
    std::string name;
    int number = 0;
    std::cout << "enter you name = ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "enter you age = ";
    std::cin >> number;
    HiThere(name, number);
    return 0;
}