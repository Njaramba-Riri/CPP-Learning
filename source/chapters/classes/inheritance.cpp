#include <iostream>

class Chef {
    public:
        void makeChicken(){
            std::cout << "Chef makes chicken\n";
        }

        void makeRice(){
            std::cout << "Chef makes rice\n";
        }

        void makeSpecialDish(){
            std::cout << "Chef makes bbq ribs\n";
        }
};

class italianChef : public Chef {
    public:
        void makePasta(){
            std::cout << "The italian chef makes pasta\n";
        }
        void makeSpecialDish(){
            std::cout << "The italian chef makes chicken parm\n";
        }
}; 

int main() 
{
    Chef chef;
    chef.makeSpecialDish();

    italianChef iChef;
    iChef.makeSpecialDish();

    return 0;
}
