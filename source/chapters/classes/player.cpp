#include <iostream>
#include <string>

void SetColor(int color)
{
    std::cout << "\033[1;" << color << "m";
}

class Player
{
private:
    std::string playerName;

public:
    Player()
        : playerName("")
    {
    }

    Player(const std::string& name)
        : playerName(name)
    {
    }

    ~Player()
    {
    }

    void SetName(const std::string& forename, std::string& surname)
    {
        playerName = forename;
        playerName.append(" ");
        playerName.append(surname);
    }

    void SetName(const std::string& name) // Method overloading.
    {
        playerName = name;
    }

    void operator+=(const std::string& other) // Operator overloading.
    {
        playerName.append(other);
    }

    const std::string& GetName() const
    {
        return playerName;
    }
};


int main()
{
    Player player;
      
    SetColor(36);
    std::cout << "Your firstname?" << std::endl;
    std::string name;
    std::getline(std::cin, name);
    
    player.SetName(name);  
    
    std::cout << "Your surname?" << std::endl;
    std::string surname;
    std::getline(std::cin, surname);

    player.operator+=(surname);

    SetColor(33);
    std::cout << "Hi " << player.GetName() << "!\n\n"
              << std::endl;
    
    SetColor(0);

    return 0;
}
