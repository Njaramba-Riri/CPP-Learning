#include <iostream>
void printValues(int x, int y)
{
    std::cout << x << '\n';
    std::cout << y << '\n';
}

int getUsername()
{
    std::cout << "Enter any number: ";
    int input{};
    std::cin >> input;

    return input;
}

void printUsername(int value)
{
    std::cout << "Your input " << value << " doubled is: " << value * 2 << '\n'; 
}

int add(int x, int y)
{
    return x + y;
}

int main()
{
    printValues(5, 7);

    int input{ getUsername() };
    printUsername(input);

    std::cout << add(getUsername(), 9) << '\n';

    return 0;
}
