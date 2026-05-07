#include<iostream>
using namespace std;

// This program prints a square pattern of 1's and 0's
// 1 0 0 0
// 1 1 0 0
// 1 1 1 0
// 1 1 1 1
int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            if (j<=i) 
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}