#include<iostream>
using namespace std;

int main() {
    int num{};
    const int min{10};
    const int max{100};

    cout<<"Enter a number between"<<min<<" and"<<max<<endl;
    cin>>num;
    if (num>=10){
        cout<<"\n===========If statement 1==========="<<endl;
        cout<<"num is greater than"<<min<<endl;

        int diff{num - min};
        cout<<num<<"is"<<diff<<"greater than"<<endl;
    }

    if(num<=max){
        cout<<"\n===========If statement 2==========="<<endl;
        cout<<"num is less than or equal to"<<max<<endl;

        int diff{max - min};
        cout<<num<<"is"<<diff<<"less than or equal to"<<endl;
    }

    if(num >= min && num <=max){
        cout<<"\n===========If statement 3==========="<<endl;
        cout<<"num is between"<<min<<" and"<<max<<endl;
        cout<<"This means statements 1 and 2 must also display!"<<endl;
    }

    if(num == min || num == max){
        cout<<"\n===========If statement 4==========="<<endl;
        cout<<"num is either equal to"<<min<<" or "<<max<<endl;
        cout<<"This means statement 4 must also display!"<<endl;
    }
}