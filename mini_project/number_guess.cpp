#include <iostream>
#include <ctime>
int main()
{
    int num = 0, guess = 0, tires = 0;
    srand(time(NULL));

    num = rand() % 100 + 1;
    std::cout << "*********NUMBER GUESSING GAME**********" << '\n';
    do
    {
        std::cout << "enter the gusss number = ";
        std::cin >> guess;
        tires++;
        if (guess > num)
        {
            std::cout << "too HIGH" << '\n';
        }
        else if (guess < num)
        {
            std::cout << "too LOW" << '\n';
        }
        else
        {
            std::cout << "CORRECT NUMBER " << tires << std ::endl;
        }
    } while (guess != num);

    std::cout << "**************************************" << '\n';

    return 0;
}