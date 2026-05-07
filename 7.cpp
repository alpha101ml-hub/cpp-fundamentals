#include<iostream>
using namespace std;

// This program prints a right-angled triangle pattern of asterisks
// *
// **
// ***
// ****
// *****

int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}