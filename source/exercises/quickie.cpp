#include <iostream>

#define MY_ROOT "Bob"
#define NEW_MACRO 

int main()
{
#ifdef MY_ROOT
    std::cout << "Am I remembering shit?! " << MY_ROOT << '\n';
#endif

#if defined(NEW_MACRO)
    std::cout << "This does the same as #ifdef but it's more C++-style syntax oriented.\n";
#endif 

#ifndef PRINT_NAME
    std::cout << "This should be printed out.\n";
#endif

#if !defined(MY_ROOT)
    std::cout <<  "This does the same as #ifndef but uses a more C++-style syntax. \n";
#endif

#if 1 //Always true so the code block will always execute. 
    int x{};
    std::cout << "Enter any number: ";
    std::cin >> x;
    std::cout << "You entered " << x << " and " << x << "^2 is: " << x * x << '\n';
#endif

}
