#include <iostream>

// Iterate over an array
int main()
{
    std::string students[] = {"shiv", "rishab", "Rock", "PAPER", "tree"};
    char grade[] = {'A', 'B', 'C', 'D', 'E'};
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        std::cout << students[i] << " = " << grade[i] << '\n';
    }

    return 0;
}