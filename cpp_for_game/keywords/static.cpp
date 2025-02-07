#include <iostream>

void NormalLocalVariable()
{
    int x{};
    std::cout << "Value of (normal) x: " << x++ << std::endl;
}

void StaticLocalVariable()
{
    static int x{};
    std::cout << "Value of (static) x: " << x++ << std::endl;
}

class StaticCounter
{
private:
    static int counter;

public:    
    void IncrementCounter()
    {
        ++counter;
    }

    void Print()
    {
        std::cout << "Counter is at: " << counter << std::endl;
        int* address = &counter;
    }
};

int StaticCounter::counter{0};


class StaticMethodCounter
{
private:
    static int m_counter;

public:
    static void IncrementCounter()
    {
        ++m_counter;
    }

    static void Print()
    {
        std::cout << "Method counter is: " << m_counter << std::endl;
        int* address = &m_counter;
    }
};

int StaticMethodCounter::m_counter{0};

int main()
{
    for (int i = 0; i < 5; i++){
        NormalLocalVariable();        
    }

    for (int i = 0; i < 5; i++)
    {
        StaticLocalVariable();
    }

    StaticCounter counter, counter1;

    for (int i = 0; i < 1; i++)
    {
        counter.Print();
        counter.IncrementCounter();
        counter.Print();

        counter1.Print();
        counter1.IncrementCounter();
        counter1.Print();

        StaticMethodCounter::Print();
        StaticMethodCounter::IncrementCounter();
        StaticMethodCounter::Print();
    }

        return 0;
}
