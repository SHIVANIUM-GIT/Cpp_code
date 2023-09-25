#include <iostream>
enum DAY
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

enum Flavor
{
    vanilla = 5,
    chocolate = 2,
    strawberry = 5

};

int main()
{
    DAY today = sunday;
    switch (today)
    {
    case sunday:
        std::cout << "It is sunday\n";
        break;
    case monday:
        std::cout << "It is monday\n";
        break;
    case tuesday:
        std::cout << "It is tuesday\n";
        break;
    case wednesday:
        std::cout << "It is wednesday\n";
        break;
    case thursday:
        std::cout << "It is thursday\n";
        break;
    case friday:
        std::cout << "It is friday\n";
        break;
    case saturday:
        std::cout << "It is saturday\n";
        break;

    default:

        break;
    }

    return 0;
}