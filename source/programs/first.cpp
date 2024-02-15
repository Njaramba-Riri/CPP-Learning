#include <iostream>

/*My `official` first C++ program.
The progra is quite straightforward, it takes an interger input from the keyboard and prints out 
1. The integer itself.
2. The integer doubled.
3. The integer divided by 2.

Might seem subtle, but- BABY STEPS!. 
*/

int main()
{
    std::cout << "Enter an integer: ";

    int num{ };
    std::cin >> num;
    
    std::cout << "You entered: " << num << '\n';
    std::cout << "Double the number is: " << num * 2 << '\n';
    std::cout << "Number divided by 2 is: " << num / 2 << '\n';

    return 0;
}
