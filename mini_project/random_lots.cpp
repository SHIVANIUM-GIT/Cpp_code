#include <iostream>
#include <ctime>
int main()
{
    srand(time(0));

    int num = rand() % 5 + 1;

    switch (num)
    {
    case 1:
        std::cout << "you win the t-shirt!1";
        break;
    case 2:
        std::cout << "you win the car!!!";
        break;
    case 3:
        std::cout << "you win the bike!!1";
        break;
    case 4:
        std::cout << "you win the bumper sticker!!";
        break;
    case 5:
        std::cout << "you win the free lunch!!";
        break;

    default:
        std::cout << "SORRY";
        break;
    }
}