#include <iostream>
#include <iomanip>

void ElseIf()
{
    std::cout << std::setw(30) << "This is `Else If` loop!" << std::endl;

    if (false)
    {
        std::cout << "Print this when True!" << std::endl;
    }
    else if (false)
    {
        std::cout << "Prints when first `else if` is true!" << std::endl;
    }
    else if (true)
    {
        std::cout << "Prints this when second `else if` is true!" << std::endl;
    }
    else
    {
        std::cout << "Prints this when all others are false!" << std::endl;
    }
}

void ForLoop()
{
    std::cout << std::setw(30) << "\nThis is `For` Loop!" << "\n";

    unsigned int array[10];

    for (unsigned int i = 0; i < 10; i++)
    {
        array[i] = i * 2;
        std::cout << std::setw(10) << "Loop Iteration: " << array[i] << ", i: " << i << std::endl;
    }
}


void WhileLoop()
{
    std::cout << "\n\nThis is `While` loop!" << std::endl;

    unsigned int array[10];
    unsigned int count{0};

    std::cout << "Number of iterations?: ";
    unsigned int loops{0};
    std::cin >> loops;

    while(count < loops){
        array[count] = count * 2;
        std::cout << "Loop Iteration: " << array[count++] << std::endl;
    }
}

void DoWhile()
{
    std::cout << "\nThis is `do...while` loop!" << std::endl;

    unsigned int array[10];
    unsigned int count{0};

    do{
        array[count] = count * 3;
        std::cout << "Loop Iteration: " << array[count++] << std::endl;
    } while (count < 10);
}


void SwitchStatement()
{

    std::cout << "\nThis is `Switch Statement`!" << std::endl;

    enum Colors
    {
        Red,
        Green,
        Pink
    };

    Colors color{Colors::Red};
    switch(color)
    {
        case Colors::Red:{
            std::cout << "Picked color is Red!\n\n";
        }
        break;

        case Colors::Green: {
            std::cout << "Picked color is Green!\n\n";
        }
        break;

        case Colors::Pink: {
            std::cout << "Picked color is Pink!\n\n";
        }
        break;

        default:
        {
            std::cout << "Picked an unknown color!\n\n";
        }
        break;
    }
}

int main()
{
    ElseIf();
    ForLoop();
    WhileLoop();
    DoWhile();
    SwitchStatement();

    return 0;
}
