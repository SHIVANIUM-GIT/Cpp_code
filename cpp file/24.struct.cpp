#include <iostream>
struct
{
    std::string brand;
    std::string model;
    int year;
} myCar1, myCar2;

struct car
{
    std::string brand;
    std::string model;
    int year;
};

int main()
{
    car yourcar;
    yourcar.brand = "BMW";
    yourcar.model = "X5";
    yourcar.year = 1999;

    car minecar;
    minecar.brand = "Ford";
    minecar.model = "Mustang";
    minecar.year = 1969;

    std::cout << yourcar.brand << " " << yourcar.model << " " << yourcar.year << "\n";
    std::cout << minecar.brand << " " << minecar.model << " " << minecar.year << "\n";
    std::cout << "#####################################################" << '\n';
    std::cout << "this member of structure " << '\n';
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    std::cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    std::cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}
