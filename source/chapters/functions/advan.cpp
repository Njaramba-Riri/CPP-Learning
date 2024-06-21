#include <iostream>

using namespace std;

void boolFunc(){
    bool isMale = false;
    bool isTall = true;

    if(isMale && isTall){
        cout << "You are a tall male.\n";
    }else if(isMale && !isTall){
        cout << "You are a short male.\n";
    }else if(!isMale && isTall){
        cout << "You are not male but you are tall.\n";
    }else{
        cout << "You are not male nor tall.\n";
    }
}

void whileFunc(){
    int index{1};
    
    while(index <= 5){
        cout << index << endl;
        index++;        
    }
}

void doWhile(){
    int index{6};

    do{
        cout << index << endl;
        index++;
    }while(index <= 5);
}

void forLoop(){
    int nums[] = {4, 29, 7, 80, 43, 67};
    for(int i = 0; i < 6; i++){
        cout << nums[i] << endl;
    }
}

int power(int baseNum, int powerNum){
    int result{1};
    for (int i = 0; i < powerNum; i++){
        result = result * baseNum;
    }
    return result;
}


void nestedFor(){
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << numberGrid[i][j];
        }
        cout << endl;
    }
}

int main()
{
    cout << "\n\nExecuting if...else\n";
    boolFunc();
    cout << "\n\nExecuting while...\n";
    whileFunc();
    cout << "\n\nExecuting do...while\n";
    doWhile();
    cout << "\n\nExecuting for loop\n";
    forLoop();
    cout << "\n\nExecuting power\n";
    cout << power(30, 3) << endl;
    cout << "\n\nExecuting Nested for loop\n";
    nestedFor();

    return 0;
}
