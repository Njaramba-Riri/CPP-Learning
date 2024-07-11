/* Demonstrates: 
1. constructor overloading.
2. defining member functions outside the class.
3. objects as function arguments.
*/

#include <iostream>

using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public:
        Distance(): feet(0), inches(0.0) //Constructor, no args.
            { }
        
        Distance(int ft, float in): feet(ft), inches(in) // Constructor, two args.
            { }

        void getdist(){
            cout << "\nEnter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }

        void showdist()
            { cout << feet << "\'-" << inches << "\""; }

        void add_dist(Distance, Distance); // Declaration.
};

void Distance::add_dist(Distance d1, Distance d2){ // Member function definition outside the class.
    inches = d1.inches + d2.inches;
    feet = 0;
    if (inches >= 12){
        inches -= 12;
        feet++;
    }
    feet += d1.feet + d2.feet;
}

int main(){
    Distance d1, d3;
    Distance d2(11, 6.45);

    d1.getdist();
    d3.add_dist(d1, d2); // Objects as arguments.

    cout << "\ndist1 = "; d1.showdist();
    cout << "\ndist2 = "; d2.showdist();
    cout << "\ndist3 = "; d3.showdist();
    cout << endl;
    
    return 0;
}
