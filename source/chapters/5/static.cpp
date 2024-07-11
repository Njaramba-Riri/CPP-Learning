#include <iostream>

using namespace std;

float getAve(float);

int main(){
    float data=1, avg;

    while( data!= 0){
        cout << "Add a value: ";
        cin >> data;

        avg = getAve(data);
        cout << "New average is " << avg << endl;
    }

    return 0;
}

float getAve(float data){
    static float total = 0;
    static int count = 0;

    count++;
    total += data;
    return (total / count);
}
