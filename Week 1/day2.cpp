// Variables & Basic Math
/*
Variables - containers
- int -- numbers (eg., 42,-7,0)
- double -- decimal numbers (e.g., 3.14, -0.5)
- char -- single character (e.g., 'A' , '9')
- bool -- true/false 

Arithmetic Operators - +, -, *, /, % (modulo-remainder)
*/

#include<iostream>
using namespace std;

int main(){
    int apples = 10;
    int oranges = 5;

    int totalFruit = apples + oranges;

    double pricePerApple = 0.5;
    double totalCost = apples * pricePerApple;

    cout<<"Total fruit: "<<totalFruit<<endl;
    cout<<"Cost for apples: $"<<totalCost<<endl;

    //modulo example
    int evenCheck = 10 % 2; // 0 because 10 is even
    int oddCheck = 7 % 2;
    cout<<"10 % 2 = "<<evenCheck<<endl;
    cout<<"7 % 2 = "<<oddCheck<<endl;

    return 0;
}


