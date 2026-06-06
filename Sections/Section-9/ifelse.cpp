#include<iostream>
using namespace std;

int main() {
    int num{};
    int target{10};
    cout<<"Enter a number and I'll compare it to"<<target<<": ";
    cin>>num;

    if (num > target) {
        cout<<"\n==================================="<<endl;
        cout<<num<<" is greater than or equal to "<<target<<endl;
        int diff{num - target};
        cout<<num<<" is "<<diff<<" greater than "<<target<<endl;
    } else{
        cout<<"\n==================================="<<endl;
        cout<<num<<" is less than "<<target<<endl;
        int diff{target - num};
        cout<<target<<" is "<<diff<<" greater than "<<num<<endl;
    }
    cout<<endl;
    return 0;
}