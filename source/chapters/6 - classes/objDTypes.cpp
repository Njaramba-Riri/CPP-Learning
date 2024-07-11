#include <iostream>

using namespace std;

class Distance{
    private:
        int feet;
        float inches;

    public:
        void setdist(int ft, float in)
            { feet=ft; inches=in; }

        void getdist(){
            cout << "\nEnter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }

        void showdist()
            { cout << feet << "\'-" << inches << "\""; }
};

int main(){
    Distance d1, d2;

    d1.setdist(10, 5.2F);
    d2.getdist();

    cout << "\ndist1 = "; d1.showdist();
    cout << "\ndist2 = "; d2.showdist();
    cout << "\n\n";

    return 0;
}
