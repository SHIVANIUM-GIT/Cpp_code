#include <iostream>

void steps(int step)
{
    if (step > 0)
    {
        std::cout << "you take steps \n";
        steps(step - 1);
    }
}
int main()
{
    steps(100);
    return 0;
}