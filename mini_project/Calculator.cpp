#include <iostream>
#include <cmath>
int main()
{
    char opt;
    double num1 = 0;
    double num2 = 0;
    double result1 = 0;
    double result2 = 0;
    std::cout << " ----------------calculator-------- " << std::endl;
    std::cout << "enter what you want to calculate (+,-,*,/,power=p)=";
    std::cin >> opt;
    std::cout << "enter numer 1 ";
    std::cin >> num1;
    std::cout << "enter numer 2 ";
    std::cin >> num2;

    switch (opt)
    {
    case '+':
        result1 = num1 + num2;
        std::cout << result1;

        break;
    case '-':
        result1 = num1 - num2;
        std::cout << result1;

        break;
    case '*':
        result1 = num1 * num2;

        std::cout << result1;

        break;
    case '/':
        result1 = abs(num1 / num2);
        std::cout << result1;

        break;
    case 'p':
        result1 = pow(num1, 2);
        result2 = pow(num2, 2);

        std::cout << result1 << std::endl
                  << result2;
        break;

    default:
        std::cout << "wrong input ";
        break;
    }

    return 0;
}