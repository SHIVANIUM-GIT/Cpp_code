#include <iostream>

class HUMAN
{
public:
    std::string Dog = "oreo";
    std::string name = "RED";
    int number = 2;

    void eat()
    {
        std::cout << "you can eat \n ";
    }
    void drink()
    {
        std::cout << "you are drinking \n";
    }
};

int main()
{
    HUMAN h1;

    h1.Dog = "jumbo";
    h1.name = "water";
    h1.number = 12;

    std::cout << h1.Dog << '\n';
    std::cout << h1.name << '\n';
    std::cout << h1.number << '\n';
    h1.eat();
    h1.drink();
    return 0;
}