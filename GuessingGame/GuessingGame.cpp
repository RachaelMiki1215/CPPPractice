// GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <cctype>

int getRandomNumber(int lowerLimit, int upperLimit) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(lowerLimit, upperLimit);

    return distrib(gen);
}


void game() {
    int secretNum = getRandomNumber(1, 100);
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    bool outOfGuesses = false;

    do {
        std::cout << "Enter guess: ";
        std::cin >> guess;
        guessCount++;
        outOfGuesses = (guessCount >= guessLimit);

        if (guess > secretNum) {
            std::cout << "Nice try. It's Smaller.\n";
        }
        else if (guess < secretNum) {
            std::cout << "Nice try. It's Larger.\n";
        }
    } while (guess != secretNum && !outOfGuesses);

    if (outOfGuesses) {
        std::cout << "You Lose.\n";
        return;
    }
    std::cout << "Bingo!! You win!\n";
}


int main()
{
    bool continueGame;

    do {
        std::cout << "\033c";

        game();

        char decision;
        std::cout << "Another round? (y/n): ";
        std::cin >> decision;
        continueGame = (tolower(decision) == 'y');
    } while (continueGame);

    std::cout << "\nThanks for playing!!";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
