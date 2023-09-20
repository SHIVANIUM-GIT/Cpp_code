#include <iostream>
#include <limits.h>
int main()
{
    std::cout << "int, double, long";
    std::cout << sizeof(int) << " bytes" << '\n';
    std::cout << sizeof(double) << " bytes" << '\n';
    std::cout << sizeof(long) << " bytes" << '\n';

    std::cout << "int_max, int_min, long_long_max, long_long_min";
    std::cout << INT_MAX << '\n';
    std::cout << INT_MIN << '\n';
    std::cout << LONG_LONG_MAX << '\n';
    std::cout << LONG_LONG_MIN << '\n';

    std::cout << "Size of array";
    char name[4] = {'A', 'B', 'C', 'D'};
    std::cout << sizeof(name) << '\n';
    return 0;
}