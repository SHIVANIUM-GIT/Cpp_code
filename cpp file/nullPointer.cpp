#include <iostream>
int main()
{
    int *pointer = nullptr;
    int x = 12;
    pointer = &x;
    if (pointer == nullptr)
    {
        std::cout << "address is not found";
    }
    else
    {
        std::cout << pointer << '\n';
        std::cout << *pointer;
    }

    return 0;
}