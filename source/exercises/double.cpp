#include <iostream>

/*A program that takes the input from the user, 
* doubles it using another function, and
* then prints the doubled number to the console.
*/

int doubleInput(int x)
{
    return x * 2;
}

int getInput(){
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int input{ getInput() };
    
    std::cout << "Your input doubled is: " << doubleInput(input) << '\n';

    return 0;
}
