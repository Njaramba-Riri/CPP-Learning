#include <iostream>
#include <string>

using namespace std;


struct Player
{
    string playerName{};
};

void WelcomePlayer(Player& player)
{
    cout << "Welcome to Text Adventure!\n\n";
    cout << "What is your name?\n";

    cin >> player.playerName;

    cout << endl
         << "Hi " << player.playerName << endl;
}

int main()
{
    Player player;
    WelcomePlayer(player);
    
    return 0;
}
