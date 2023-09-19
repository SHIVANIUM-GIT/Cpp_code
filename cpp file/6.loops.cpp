#include <iostream>

int main()
{
    int n = 5;

    // While loop
    std::cout << "While Loop:" << std::endl;
    while (n > 0)
    {
        std::cout << n << " ";
        n--;
    }
    std::cout << std::endl;

    // Do-While loop
    n = 5; // Reset n to 5
    std::cout << "Do-While Loop:" << std::endl;
    do
    {
        std::cout << n << " ";
        n--;
    } while (n > 0);
    std::cout << std::endl;

    // For loop
    std::cout << "For Loop:" << std::endl;
    for (int i = 5; i > 0; i--)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
