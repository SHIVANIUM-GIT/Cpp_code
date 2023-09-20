#include <iostream>

int add(int num[], int size)
{
    int add = 0;
    for (int i = 0; i < size; i++)
    {
        add += num[i];
    }

    return add;
}
int main()
{
    int final, size;
    int num[] = {25, 15, 34, 16};
    size = sizeof(num) / sizeof(num[0]);
    final = add(num, size);
    std::cout << "$" << final;
    return 0;
}