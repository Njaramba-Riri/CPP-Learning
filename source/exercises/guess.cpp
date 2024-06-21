#include <iostream>


using namespace std;

int main()
{
    int secretNumber{7};
    int guess;
    int guessCount{0};
    int guessLimit{3};
    bool haveGuess{true};

    while(secretNumber != guess && haveGuess){
        if(guessCount < guessLimit){
            cout << "Enter your guess: ";
            cin >> guess;
            guessCount++;            
        }else{
            haveGuess = false;
            cout << "You run out of guesses, you lost!.\n";
        }

    }

    cout << "You win!." << endl;

    return 0;
}
