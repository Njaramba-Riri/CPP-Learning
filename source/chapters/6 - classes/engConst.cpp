// const member functions and const arguments to member functions
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////
class Distance //English Distance class
{
    private:
        int feet;
        float inches;    
    public:
        Distance() : feet(0), inches(0.0) //constructor (no args)
            { }
        Distance(int ft, float in) : feet(ft), inches(in) //constructor (two args)
            { }

        void getdist() //get length from user
        {
            cout << "\nEnter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }
        
        void showdist() const //display distance
            { cout << feet << "\'-" << inches << '\"'; }
            
        Distance add_dist(const Distance&) const; //add
};

//--------------------------------------------------------------
//add this distance to d2, return the sum
Distance Distance::add_dist(const Distance& d2) const
{
    Distance temp; //temporary variable
    // feet = 0;               ERROR: can’t modify this
    // d2.feet = 0;            ERROR: can’t modify d2
    
    temp.inches = inches + d2.inches; //add the inches
    if(temp.inches >= 12.0) //if total exceeds 12.0,
    {
        temp.inches -= 12.0; //then decrease inches by 12.0 and
        temp.feet = 1; //increase feet by 1
    }
    temp.feet += feet + d2.feet; //add the feet
    
    return temp;
}
////////////////////////////////////////////////////////////////
int main()
{
    Distance dist1, dist3; //define two lengths
    Distance dist2(11, 6.25); //define, initialize dist2
    
    dist1.getdist();
    dist3 = dist1.add_dist(dist2);
    
    cout << "\ndist1 = ";
    cout << "\ndist2 = ";
    cout << "\ndist3 = ";
    cout << endl;
    
    return 0;
}
