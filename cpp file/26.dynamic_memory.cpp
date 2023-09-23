#include <iostream>

int main()
{
    char *pGrade = NULL;
    int size = 0;

    std::cout << "How many grade  you want :" << '\n';

    std::cin >> size;

    pGrade = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter the grade #" << i + 1 << ":";
        std::cin >> pGrade[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << pGrade[i] << " ";
    }

    delete[] pGrade;

    return 0;
}