#include <iostream>

int main(){
    for(int j=0; j<80; j++){
        char ch = (j%8) ? ' ' : 'x';
        std::cout << ch;
    }

    return 0;
}
