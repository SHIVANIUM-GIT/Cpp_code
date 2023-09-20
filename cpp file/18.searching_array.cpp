#include <iostream>

int search(int num[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (num[i] == element)
            return i;
    }
    return -1;
}

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index = 0;
    int size = sizeof(num) / sizeof(num[0]);
    int element = 0;
    std::cout << "enter the search number = ";
    std::cin >> element;
    index = search(num, size, element);
    if (index != -1)
    {
        std::cout << "found is at " << index + 1 << '\n';
    }
    else
    {
        std::cout << "not found  " << '\n';
    }
    return 0;
}