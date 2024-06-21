#include <iostream>

using namespace std;

string dayOfWeek(int day){
    string weekDay;

    switch(day){
        case 1:
            weekDay = "Sunday";
            break;
        case 2:
            weekDay = "Monday";
            break;
        case 3:
            weekDay = "Tuesday";
            break;
        case 4:
            weekDay = "Wednesday";
            break;
        case 5:
            weekDay = "Thursday";
            break;
        case 6:
            weekDay = "Friday";
            break;
        case 7:
            weekDay = "Saturday";
            break;
        default:
            weekDay = "Invalid week day";
    }

    return weekDay;
}



int main()
{
    int sikuGani;
    std::cout << "Enter week day: ";
    std::cin >> sikuGani;

    if (sikuGani <= 7 && sikuGani != 0){
        std::cout << "Arise and shine, it is on " << dayOfWeek(sikuGani) << "!." << endl;
    }else{
        std::cout << dayOfWeek(sikuGani) << endl;
    }
    

    return 0;
}
