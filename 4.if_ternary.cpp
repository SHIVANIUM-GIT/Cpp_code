#include <iostream>
int main()
{
    int age = 0;
    std::cout << "enter the age = ";
    std::cin >> age;

    // with ternary

    age >= 18 ? std::cout << "you are greater than 18  " << std::endl : std::cout << "you not greater than 18 " << std::endl;

    // with if statement
    if (age >= 18)
    {
        std::cout << "you are adult ";
    }
    else
    {
        std::cout << "you are not adult ";
    }
    return 0;
}