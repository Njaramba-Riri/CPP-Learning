// Static class data.
#include <iostream>

using namespace std;

class foo{
    private:
        static int count; // Only one data item for all objects, note "declaration" only!.
    
    public:
        foo()
            { count ++; } // Incrememnts count when object created.
        int getCount() // returns count.
            { return count; }
};

int foo::count = 0; // Definition of count.

int main(){
    foo f1, f2, f3;

    cout << "count is " << f1.getCount() << endl; //Each object
    cout << "count is " << f2.getCount() << endl; // "sees"
    cout << "count is " << f3.getCount() << endl; //the same value.

    foo f4;
    cout << "count is " << f4.getCount() << endl; // Except this.

    return 0;
}
