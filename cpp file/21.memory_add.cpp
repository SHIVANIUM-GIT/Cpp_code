#include <iostream>
int main()
{
    std::string name = "bro";
    int num = 0;
    bool students = true;

    std::cout << &name << '\n';
    std::cout << &num << '\n';
    std::cout << &students << '\n';

    return 0;
}