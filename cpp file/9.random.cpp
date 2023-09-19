#include <iostream>

#include <ctime>

int main()
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and print a random number between 1 and 100
    int randomNum = rand() % 100 + 1;
    std::cout << "Random number: " << randomNum << std::endl;

    return 0;
}
