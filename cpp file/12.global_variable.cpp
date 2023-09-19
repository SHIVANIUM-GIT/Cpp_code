#include <iostream>
int num = 3; // this is global variable

void first()
{
    std::cout << "this is the first function " << ::num << '\n';
}
void second()
{
    std::cout << "this is in the second function " << ::num << '\n';
}

int main()
{
    int num = 1;
    first();
    std::cout << "this is main function " << num << '\n';
    second();
    return 0;
}