#include <iostream>
int main()
{
    int size = 99;
    std::string food[size];

    fill(food, food + (size / 3), "pizza");
    fill(food + (size / 3), food + (size / 3) * 2, "HOTDOG");
    fill(food + (size / 3) * 2, food + size, "vegetable");

    for (std::string name : food)
    {
        std::cout << name << '\n';
    }

    return 0;
}