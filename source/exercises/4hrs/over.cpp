#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string name{};
    int age{};

    cout << "What's your name?: ";
    getline(cin, name);
    cout << "How old is you?: ";
    cin >> age;

    cout << "Hello " << name << " feels good to be " << age << endl;

    return 0;
}
