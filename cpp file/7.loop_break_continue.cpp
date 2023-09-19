#include <iostream>

int main()
{
    int n = 5;

    std::cout << "While Loop:" << std::endl;
    while (n > 0)
    {
        if (n == 3)
        {
            std::cout << "Found 3, breaking the loop." << std::endl;
            break;
        }

        if (n == 4)
        {
            std::cout << "Skipping 4." << std::endl;
            n--;
            continue;
        }

        std::cout << n << " ";
        n--;
    }
    std::cout << std::endl;

    n = 5; // Reset n to 5
    std::cout << "Do-While Loop:" << std::endl;
    do
    {
        if (n == 2)
        {
            std::cout << "Found 2, breaking the loop." << std::endl;
            break;
        }

        if (n == 1)
        {
            std::cout << "Skipping 1." << std::endl;
            n--;
            continue;
        }

        std::cout << n << " ";
        n--;
    } while (n > 0);
    std::cout << std::endl;

    std::cout << "For Loop:" << std::endl;
    for (int i = 5; i > 0; i--)
    {
        if (i == 2)
        {
            std::cout << "Found 2, breaking the loop." << std::endl;
            break;
        }

        if (i == 4)
        {
            std::cout << "Skipping 4." << std::endl;
            continue;
        }

        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
