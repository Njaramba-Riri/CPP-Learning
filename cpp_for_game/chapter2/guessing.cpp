#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    srand(time(NULL)); // Generates unique random numbers using current time.

    unsigned int numberToGuess = rand() % 100; // Gets a random number between 0 and 99.

    cout << "Guess a number between 0 and 99: ";

    unsigned int guessedNumber{};
    cin >> guessedNumber;

    cout << "You guessed: " << guessedNumber << "\nThe actual number was: " << numberToGuess << "\n\n\n";

    return 0;
}
