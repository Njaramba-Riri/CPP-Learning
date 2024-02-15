#include <iostream> //The standard C++ basic input/output library. (essential for cout, cin, endl.)

int main()
{
    int x {6}; // direct value initialization.

    std::cout << "The value of x is: " << x  << std::endl;

    std::cout << "Hi!," << std::endl; // endl makes cursor move to the next line of the console.
    std::cout << "This is my new learning journey, I am loving it!." << std::endl;   

    std::cout << "\nTonight has been a rollercoaster!\n"; // `\n` is effiecient 1. it's horts. 2. Can be embeded in texts.
    // 3. Doesn't flush buffer.

    std::cout << "Enter a number: "; // Ask for input.

    int input{}; // define variable and valu-initialize it to hold the input.
    std::cin >> input; // Get the input from the keyboard and store it in x.
    /*
    std::cout uses `<<` which stands for insertion operator. Technically sends the output to the console.
    std::cin uses `>>` which stands for extraction operator. 
    */
   
    std::cout << "You entered: " << input << '\n'; 

    return 0;
}
