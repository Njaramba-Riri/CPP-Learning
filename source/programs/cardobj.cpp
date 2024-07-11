// Cards as objects
#include <iostream>

using namespace std;

enum Suit { clubs, diamonds, hearts, spades};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

void setColor(int color);

class card{
    private:
        int number; // 2 to 10, jack, queen, king, ace
        Suit suit; // clubs, diamonds, hearts, spades.

    public:
        card ()     // Constructor, no args.
        { }

        card (int n, Suit s): number(n), suit(s) // Constructor, 2 args.
        { }

        void display();      // Display card.
        bool isEqual(card); // Same as another card?.
};

void card::display(){
    setColor(36);
    if (number >= 2 && number <= 10){
        cout << number << " of ";
    }else{
        switch (number)
        {
        case jack:  cout << "jack of "; break;
        case queen: cout << "queen of "; break;
        case king:  cout << "king of "; break;
        case ace:   cout << "ace of "; break;
        }
    }
    switch (suit)
    {
    case clubs:    cout << "clubs"; break;
    case diamonds: cout << "diamonds"; break;
    case hearts:   cout << "hearts"; break;
    case spades:   cout << "spades"; break;
    }
}

bool card::isEqual(card c2){ // Return true if card is equal. 
    return (number==c2.number && suit==c2.suit) ? true : false;
}

void setColor(int color){
    cout << "\033[1;" << color << "m";
};

int main(){
    card temp, prize, chosen;
    int position;

    setColor(20);
    card card1(7, clubs); //Define and initialize card 1.
    cout << "\nCard 1 is the "; card1.display();

    setColor(39);
    card card2(ace, spades);
    cout << "\nCard 2 is the "; card2.display();

    setColor(39);
    card card3(jack, hearts);
    cout << "\nCard 3 is the "; card3.display();

    prize = card3;  // This is the card to guess.

    setColor(32);
    cout << "\nI'm swapping card 1 and card 3";
    temp = card3; card3 = card1; card1 = temp;

    setColor(33);
    cout << "\nI'm swapping card 2 and card 3";
    temp = card3; card3 = card2; card2 = temp;

    setColor(34);
    cout << "\nI'm swapping card 1 and card 2";
    temp = card2; card2 = card1; card1 = temp;

    setColor(35);
    cout << "\nNow, where (1, 2, or 3) is the "; prize.display(); cout << "?: "; cin >> position;

    switch (position) // Set chosen to user's guess.
    {
    case 1: chosen = card1; break;
    case 2: chosen = card2; break;
    case 3: chosen = card3; break;
    }

    if ( chosen.isEqual(prize) ){ // Is chosen the prize card?
        setColor(32);
        cout << "\n\nThat's damn right!. You win!.";
    }else{
        setColor(31);
        cout << "\n\nYou lose!.";
    }
    setColor(39);
    cout << "You chose the "; chosen.display();
    cout << "\n\n";

    setColor(39);
    return 0;
}
