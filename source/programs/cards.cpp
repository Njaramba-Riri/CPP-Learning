#include <iostream>

using namespace std;

const int clubs=0, diamonds=1, hearts=2, spades=4;
const int jack=11, queen=12, king=13, ace=14;

struct card{
    int number; //0-10, JQKA
    int suit; //clubs, diamonds, hearts, spades.
};

int main(){
    card temp, prize, chosen;
    int position;

    card card1 = {7, clubs};
    cout << "Card 1 is 7 of clubs\n";

    card card2 = {jack, hearts};
    cout << "Card 2 is jack of hearts\n";

    card card3 = {queen, diamonds};
    cout << "Card 3 is queen of diamonds\n";

    prize = card3;

    cout << "I am swapping card 1 and card 3\n";
    temp = card3; card3 = card1; card1 = temp;

    cout << "I am swapping card 2 and card 3\n";
    temp = card3; card3 = card2; card2 = temp;

    cout << "I am swapping card 1 and card 2\n";
    temp = card2; card2 = card1; card1 = temp; 

    cout << "Now, where is the queen of diamonds at?. (1, 2, 3): ";
    cin >> position;

    switch (position){
        case 1: chosen = card1; break;
        case 2: chosen = card2; break;
        case 3: chosen = card3; break;
        default: cout << "\nInvalid position, try again.\n"; break;
    }

    if (chosen.number == prize.number && chosen.suit == prize.suit){
        cout << "That's damn right!. You win.\n";
    }else{
        cout << "Ala!, kwani haukuwa keen kwa darasa?.\n";
    }

    return 0;
}
