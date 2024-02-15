#include <iostream>

int getUserIput()
{
    std::cout << "Enter a number: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int num{ getUserIput() };
    int num2{ getUserIput() };

    std::cout << "Your input " << num << " doubled is: " << num * 2 << '\n';
    std::cout << "second input " << num2 << " added to first = " << num + num2 << '\n';

    return 0; 
}
