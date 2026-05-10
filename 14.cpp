#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cout<<"Enter 5 numbers: ";
    cin>>a>>b>>c>>d>>e;

    cout<<"The sum of the 5 numbers is: "<<a+b+c+d+e<<endl;

    int a1, a2, a3, a4, a5;
    cout<<"Enter 5 numbers again: ";
    cin>>a1>>a2>>a3>>a4>>a5;
    if (a1<a2){
        cout<<a2<<" is the largest number."<<endl;
        cout<<a1<<" is the smallest number."<<endl;
        if(a2<a3){
            cout<<a3<<" is the largest number."<<endl;
            cout<<a2<<" is the smallest number."<<endl;
            if(a3<a4){
                cout<<a4<<" is the largest number."<<endl;
                cout<<a3<<" is the smallest number."<<endl;
                if(a4<a5){
                    cout<<a5<<" is the largest numbernumber."<<endl;
                    cout<<a4<<" is the smallest number."<<endl;
                } else {
                    cout<<a4<<" is the largest number."<<endl;
                    cout<<a5<<" is the smallest number."<<endl;
                }
            } else {
                cout<<a3<<" is the largest number."<<endl;
                cout<<a4<<" is the smallest number."<<endl;
            }
        } else {
            cout<<a2<<" is the largest number."<<endl;
            cout<<a3<<" is the smallest number."<<endl;
        }
    } else {
        cout<<a1<<" is the largest number."<<endl;
        cout<<a2<<" is the smallest number."<<endl;
    }
    if(a1%2==0){
        cout<<a1<<" is an even number."<<endl;
    } else {
        cout<<a1<<" is an odd number."<<endl;
    }
    if(a2%2==0){
        cout<<a2<<" is an even number."<<endl;
    } else {
        cout<<a2<<" is an odd number."<<endl;
    }
    if(a3%2==0){
        cout<<a3<<" is an even number."<<endl;
    } else {
        cout<<a3<<" is an odd number."<<endl;
    }
    if(a4%2==0){
        cout<<a4<<" is an even number."<<endl;
    } else {
        cout<<a4<<" is an odd number."<<endl;
    }
    if(a5%2==0){
        cout<<a5<<" is an even number."<<endl;
    } else {
        cout<<a5<<" is an odd number."<<endl;
    }

    int b1, b2, b3, b4, b5;
    cout<<"Enter 5 numbers again: ";
    cin>>b1>>b2>>b3>>b4>>b5;
    cout<<b5<<" "<<b4<<" "<<b3<<" "<<b2<<" "<<b1<<endl;

    return 0;
}
