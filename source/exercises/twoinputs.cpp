#include <iostream>

/*This program takes two inputs from the ser, and prints out:
 *1.The addition of the two numbers.
 *2.The multiplication of the two inputs.
 *3.The division of the same.
*/

int main()
{
    std::cout << "Enter the first number: ";
    int first{};
    std::cin >> first;

    std::cout << "Enter the second number: ";
    int second{};
    std::cin >> second;

    std::cout << "Your first input " << first << " added to second input " << second 
    << " outputs: " << first + second << '\n';
    std::cout << "when the two are multiplied, the output is: " << first * second << '\n';
    std::cout << "..and when the first is divided by the second, the output is: " << first / second << '\n';

    return 0;
}
