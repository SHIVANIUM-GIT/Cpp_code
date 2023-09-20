#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int playerChoice;
    int computerChoice;
    int playerScore = 0;
    int computerScore = 0;

    while (true)
    {
        std::cout << "-------------------" << std::endl;
        std::cout << "Rock, Paper, Scissors Game" << std::endl;
        std::cout << "-------------------" << std::endl;
        std::cout << "1. Rock" << std::endl;
        std::cout << "2. Paper" << std::endl;
        std::cout << "3. Scissors" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        cin >> playerChoice;

        if (playerChoice < 1 || playerChoice > 4)
        {
            std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
            continue;
        }

        if (playerChoice == 4)
        {
            break;
        }

        computerChoice = rand() % 3 + 1;

        std::cout << "You chose: ";
        switch (playerChoice)
        {
        case 1:
            std::cout << "Rock" << std::endl;
            break;
        case 2:
            std::cout << "Paper" << std::endl;
            break;
        case 3:
            std::cout << "Scissors" << std::endl;
            break;
        }

        std::cout << "Computer chose: ";
        switch (computerChoice)
        {
        case 1:
            std::cout << "Rock" << std::endl;
            break;
        case 2:
            std::cout << "Paper" << std::endl;
            break;
        case 3:
            std::cout << "Scissors" << std::endl;
            break;
        }

        if (playerChoice == computerChoice)
        {
            std::cout << "It's a tie!" << std::endl;
        }
        else if ((playerChoice == 1 && computerChoice == 3) ||
                 (playerChoice == 2 && computerChoice == 1) ||
                 (playerChoice == 3 && computerChoice == 2))
        {
            std::cout << "You win!" << std::endl;
            playerScore++;
        }
        else
        {
            std::cout << "Computer wins!" << std::endl;
            computerScore++;
        }

        std::cout << "Player Score: " << playerScore << std::endl;
        std::cout << "Computer Score: " << computerScore << std::endl;
    }

    std::cout << "Thanks for playing!" << std::endl;

    return 0;
}
