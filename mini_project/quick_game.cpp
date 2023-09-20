#include <iostream>
#include <string>

int main()
{
    std::string question[] = {
        "1. What year was C++ created?:",
        "2. Who invented C++?:",
        "3. What is the predecessor of C++?:",
        "4. Is Earth flat?:"};

    std::string option[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. MAN", "B. WOMEN", "C. BOY", "D. MACHINE"},
        {"A. C++", "B. C--", "C. C", "D. PYTHON"},
        {"A. YES", "B. NO", "C. MAYBE", "D. I DO NOT KNOW"}};

    char key[] = {'C', 'A', 'C', 'B'};
    int size = sizeof(question) / sizeof(question[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << "***************" << '\n';
        std::cout << question[i] << '\n';
        std::cout << "***************" << '\n';

        for (int j = 0; j < sizeof(option[i]) / sizeof(option[i][0]); j++)
        {
            std::cout << option[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == key[i])
        {
            std::cout << "CORRECT\n";
            score++;
        }
        else
        {
            std::cout << "WRONG\n";
            std::cout << "Answer: " << key[i] << '\n';
        }
    }

    std::cout << "***************" << '\n';
    std::cout << "*    RESULTS    *" << '\n';
    std::cout << "***************" << '\n';
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "# of questions: " << size << '\n';
    std::cout << "Score: " << (score / (double)size) * 100 << '%' << '\n';

    return 0;
}
