#include<iostream>
using namespace std;


// RIGHT ANGLE TRIANGLE STAR PATTERN
// *
// **
// ***
// ****
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1; j<=i; j++){
            cout<<"*";    
        }
        cout<<endl;
    }
} 