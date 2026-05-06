#include<iostream>
using namespace std;

// RIGHT ANGLE TRIANGLE NUMBER PATTERN
// 1234
// 123
// 12
// 1

int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4-i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}