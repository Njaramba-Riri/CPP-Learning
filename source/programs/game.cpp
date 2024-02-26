#include <ctime>
#include <cstdlib>
#include <chrono>
#include <limits>
#include <iomanip>
#include <iostream>

void setColor(int color)
{
    std::cout << "\033[1;" << color << "m";
}

void playGame()
{
    srand(static_cast<unsigned int>(time(0))); //Initialize random number generator.
    
    setColor(36);
    std::cout << R"(
                _____                          _   _            _             
               / ____|                        | | (_)          | |            
     __    _  | |                             | |              | |
    |   \ | | | |  __ _   _  ___  ___ ___     | |_ _  ___ _ __ | |_ ___  _ __  
    | |\ \| | | | |_ | | | |/ _ \/ __/ __|    | __| |/ _ \ '_ \| __/ _ \| '__|  
    | | \   | | |__| | |_| |  __/\__ \__ \    | |_| |  __/ | | | || (_) | |   
    |_|  \__|  \_____|\__,_|\___||___/___/     \__|_|\___|_| |_|\__\___/|_|   
                                                                    
    )";
    std::cout << std::setw(16) << "Let's play a game!\n\n";

    setColor(34);
    int difficulty;
    std::cout << "Select difficulty level (1: Easy, 2: Medium, 3: Hard): ";
    std::cin >> difficulty;
    setColor(39);

    int maxNumber{};
    switch (difficulty)
    {
    case 1: maxNumber = 10;
        break;
    case 2: maxNumber = 50;
        break;
    case 3: maxNumber = 100;
        break;
    default:
        maxNumber = 50;
        break;
    }

    int secretNumber = rand() % maxNumber;
    int guess{};
    int guessCount{ 0 };
    setColor(36);
    std::cout << "Guess a number between 0 and " << maxNumber << ".\n\n";
    setColor(39);

    auto start = std::chrono::high_resolution_clock::now(); // start timer.

    do{
        std::cout << "Enter your guess: ";
        while(!(std::cin >> guess))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            setColor(31);
            std::cout << guess << " is not a valid entry. Enter a number between 0 and " << maxNumber << "\n";
            setColor(39);
        }
        guessCount++;

        if (guess < secretNumber){
            setColor(31);
            std::cout << "Guess too low! Try again :/\n";
            if (guessCount % 3 == 0)
            {
                std::cout << "Hint: The number is greater than " << guess << ".\n";
            }
            setColor(39);
        }else if (guess > secretNumber){
            setColor(31);
            std::cout << "Guess too high! Try again :/\n";
            if (guessCount % 3 == 0)
            {
                std::cout << "Hint: The number is less than " << guess << ".\n";
            }
            setColor(39);
        }
    }while (guess != secretNumber);

    auto end = std::chrono::high_resolution_clock::now(); // end timer.

    std::chrono::duration<double>elapsed = end - start;
    setColor(32);
    std::cout << "\nCongrats, you won!. Look at you all smiley :))\n";
    setColor(39);
    std::cout << "You took " << elapsed.count() << " seconds and " << guessCount  << " trials to complete the game.\n\n";
 
}

void playRoulette()
{
    srand(static_cast<unsigned int>(time(0)));
    int chamber = rand() % 6 +1;

    setColor(36);
    std::cout << R"(
                    _                                                      _
         ____      (_)                                         __         (_)
        |     \     __   _________                            |  |         __  ___         ___  _________
        |      \   |  | |   ______|      ___    ______        |  |        |  | \  \       /  / |   ______|
        |  |\   \  |  | |  |______      / _ \  |  | _ \       |  |        |  |  \  \     /  /  |  |______     
        |  | \   | |  | |   ______|    ( (_) ) |  |(_)/_      |  |        |  |   \  \   /  /   |   ______|   
        |  |__)  | |  | |  |______      \___/  |__|  \__\     |  |______  |  |    \  \_/  /    |  |______
        |_______/  |__| |_________|                           |_________| |__|     \_____/     |_________| ...the choice is yours.
    )";
    std::cout << std::left;
    std::cout << std::setw(320) << R"(
        Let's play.. ... ..Russian Roulette. 
                    (^_^)
                     \_/ 
    )";

    setColor(39);
    std::string input;
    std::cout << "\nPress any key and enter to pull the trigger...\n";
    std::cin >> input;
    setColor(39);
    if (chamber == 6){
        setColor(31);
        std::cout << "Bang! you lost.\n";
        setColor(39);
    }else{
        setColor(32);
        std::cout << "Click! lucky you. You're safe...this time.\n";
        setColor(39);
    }
}

int main()
{
    char playAgain;
    char whichGame;

    do{
        std::cout << "Which game do you want to play?: ";
        std::cin >> whichGame;
        if (whichGame == 'R' || whichGame == 'r')
        {
            playRoulette();
        }else if(whichGame == 'G' || whichGame == 'g'){
            playGame();
        }else{
            setColor(31);
            std::cout << whichGame << " is an invalid choice!. Valid choices are either [`r`] or [`g`]\n\n";
            setColor(39);            
        }

        std::cout << "Feels like a rollercoaster?. Wanna play again? (y/n): ";
        std::cin >> playAgain;
    } while(playAgain == 'y' || playAgain == 'Y');

    return 0;
}
