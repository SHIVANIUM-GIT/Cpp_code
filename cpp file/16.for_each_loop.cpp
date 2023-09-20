#include <iostream>

// Iterate over an array
int main()
{
    std::string students[] = {"shiv", "rishab", "Rock", "PAPER", "tree"};

    for (std::string student : students)
    {

        std::cout << student << '\n';
    }

    return 0;
}