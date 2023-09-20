#include <iostream>

int main()
{

    const int rows = 3;
    const int cols = 4;

    int multiArray[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    std::cout << "2D Array Elements:" << std::endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << multiArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    multiArray[1][2] = 42;

    std::cout << "Modified Element at [1][2]: " << multiArray[1][2] << std::endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << multiArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
