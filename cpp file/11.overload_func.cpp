#include <iostream>

void BakePizza()
{
    std::cout << "Here is your pizza" << '\n';
}

void BakePizza(std::string name)
{
    std::cout << "Here is your pizza" << name << '\n';
}

void BakePizza(std::string name, std::string name2)
{
    std::cout << "Here is your pizza" << name << "and" << name2 << '\n';
}

/*
this is example of overloaded functions
which is function has same name but
different parameters or arguments
*/
int main()
{
    BakePizza();
    BakePizza("Pineapple");
    BakePizza("Pineapple", "mushroom");
    return 0;
}