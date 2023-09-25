#include <iostream>

class CAR
{
public:
    std::string model;
    std::string name;
    int year;

    CAR(std::string model, std::string name, int year)
    {
        this->model = model;
        this->name = name;
        this->year = year;
    }
};
int main()
{
    CAR car1("2021", "BMW", 2023);
    CAR car2("2020", "audi", 2023);
    CAR car3("2019", "thar", 2023);

    std::cout << car1.model << '\n';
    std::cout << car1.name << '\n';
    std::cout << car1.year << '\n';

    std::cout << car2.model << '\n';
    std::cout << car2.name << '\n';
    std::cout << car2.year << '\n';

    std::cout << car3.model << '\n';
    std::cout << car3.name << '\n';
    std::cout << car3.year << '\n';

    return 0;
}