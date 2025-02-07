#ifndef GAMELOOP_H
#define GAMELOOP_H

#include "player.h"
#include "playerOptions.h"

class Game
{
private:
    Player player;

    void WelcomePlayer();
    void GivePlayerOptions();
    void GetPlayerInput(std::string& playerInput);
    PlayerOptions EvaluateInput(std::string& playerInput);

public:
    Game() : player() {}
    void RunGame();
};

#endif
