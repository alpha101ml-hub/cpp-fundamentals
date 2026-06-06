//switch with enumeration

#include <iostream>
using namespace std;

int main(){
    enum Direction{
        left, right, top, down
    };

    Direction heading{left};

    switch(heading){
        case left:
            cout << "Moving left" << endl;
            break;  
        case right:
            cout << "Moving right" << endl;
            break;
        default:
            cout << "Do nothing" << endl;
    }
}