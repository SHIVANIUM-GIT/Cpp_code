#include <iostream>
int main()
{
    std::string cars[3] = {"BMW", "honda", "audi"};
    double num[3] = {2.26, 5.156, 26.161};
    for (size_t i = 0; i < 3; i++)
    {
        std::cout << cars[i] << " = " << num[i] << '\n';
    }

    return 0;
}