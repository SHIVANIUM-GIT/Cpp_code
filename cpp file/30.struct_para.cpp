#include <iostream>

struct Car
{
    std::string brand;
    int year;
    std::string model;
};

void printCar(Car &car)
{

    std::cout << &car << "\n";
    std::cout << car.brand << "\n";
    std::cout << car.brand << "\n";
    std::cout << "#####################################################" << '\n';
    std::cout << "this member of structure " << '\n';
}

int main()
{
    Car yourcar;
    yourcar.brand = "BMW";
    yourcar.model = "X5";
    yourcar.year = 1999;

    Car minecar;
    minecar.brand = "Ford";
    minecar.model = "Mustang";
    minecar.year = 1969;

    std::cout << "your car address : " << &yourcar << "\n";
    printCar(yourcar);

    std::cout << "mine car address : " << &minecar << "\n";
    printCar(minecar);

    return 0;
}
