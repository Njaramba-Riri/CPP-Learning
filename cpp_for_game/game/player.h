#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
private:
    std::string playerName;

public:
    Player()
        : playerName("Not Set") // Default constructor.
    {
    }

    void SetName(const std::string& name)
    {
        playerName = name;
    }

    const std::string& GetName() const
    {
        return playerName;
    }
};

#endif
