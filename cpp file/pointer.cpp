#include <iostream>
int main()
{
    int num = 5;
    std::string name = "shiv";
    std::string food[] = {"pizza1", "pizza2"};

    int *pnum = &num;
    std::string *pname = &name;
    std::string *pfood = food;

    std::cout << num << " address => " << pnum << '\n';
    std::cout << name << " address => " << pname << '\n';
    std::cout << food[0] << " address => " << pfood << '\n';
    return 0;
}
