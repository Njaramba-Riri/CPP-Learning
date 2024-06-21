#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        string major;
        char grade;
        double gpa;
        
        Student(string jina, string Amajor, char Agrade, double score){ //Constructor.
            name = jina;
            major = Amajor;
            grade = Agrade;
            gpa = score;
        }

        bool hasHonors(){ //Object function --> Essentially they are used to check some kind of information about objects themselves.
            if(gpa >= 3.5){
                return true;
            }
            return false;            
        }

};


int main()
{
    Student Tom("Tom", "Computer Science", 'A', 3.4);
    cout << Tom.hasHonors() << endl;
    Student Mike("Michael", "Journalism", 'B', 3.9);
    cout << Mike.hasHonors() << endl;


    return 0;
}
