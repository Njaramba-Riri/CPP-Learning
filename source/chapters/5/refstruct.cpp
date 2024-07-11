#include <iostream>

using namespace std;

struct Distance{
    int feet;
    float inches;
};
/*Function declarations.*/
void scale(Distance&, float);
void engldisp(Distance);

int main(){
    Distance d1 = {12, 5.6};
    Distance d2 = {10, 7.3};

    cout << "d1 = "; engldisp(d1);
    cout << "\nd2 = ";  engldisp(d2);

    scale(d1, 0.5);
    scale(d2, 0.25);

    cout << "\nd1 = "; engldisp(d1);
    cout << "\nd2 = "; engldisp(d2);
    cout << endl;

    return 0;
}

// Scales values of type Distance by a factor.
void scale(Distance& dd, float factor){
    float inches = (dd.feet*12 + dd.inches) * factor;
    dd.feet = static_cast<int>(inches / 12);
    dd.inches = inches - dd.feet*12;
}

// Display the structure Distance in inches and feet.
void engldisp(Distance dd){
    cout << dd.feet << "\'-" << dd.inches << "\"";
}
