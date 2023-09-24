#include <iostream>

int fact(int number)
{
    if (number > 1)
    {
        return number * fact(number - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;

    std::cout << "Enter the number to factorial: ";
    std::cin >> num;
    std::cout << fact(num);

    return 0;
}