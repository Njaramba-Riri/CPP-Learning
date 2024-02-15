#include <iostream>

void doA()
{
    std::cout << "In doA()\n";
}

void doB()
{
    std::cout << "Start doB()\n";
    doA();
    std::cout << "End doB()\n";
}

int main()
{
    std::cout << "Starting main()\n";
    doB();
    std::cout << "Ending main()\n";
}

/* Interesting, huh?.
* The above is quite a rollercoaster; a function calling a function calling a function. 
* Also, nested functions are not allowed in C++. SHOCKER!.  
*/
