#include <iostream>
#include <string>

void HiThere(std::string name, int number)
{
    std::cout << "Your name is: " << name << '\n';
    std::cout << "Your age is: " << number << '\n';
}

int Add(int number)
{
    return 2 * number;
}

int main()
{
    std::string name;
    int number = 0;

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    std::cin >> number;

    int doubleAge = Add(number);

    std::cout << "Your age doubled is: " << doubleAge << '\n';

    HiThere(name, number);

    return 0;
}
