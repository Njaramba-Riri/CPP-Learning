#include <iostream>

using namespace std;

namespace Teacher
{
    void PrintName()
    {
        cout << "My name is Bruce. I am the school principal." << endl;
    }
}

namespace Student
{
    void PrintName()
    {
        cout << "I am Damaris and am this year's valedictorian!" << endl;
    }
}

using namespace Teacher;

int main()
{
    PrintName();

    Student::PrintName();

    return 0;
}
