#include<iostream>
using namespace std;

int main(){
    // define conversion values in cents
    const int dollar_value(100);
    const int quater_value(25);
    const int dime_value(10);
    const int night_value(5);

    int change_amount{};

    // Solution 1 - not using the modulo operstor

    cout<<"Enter an amount in cents: ";
    cin>>change_amount;

    int balance{}, dollar{},dimes{}, quarters{}, nickels{}, pennis{};

    dollar = change_amount/dollar_value;
    balance = change_amount - (dollar*dollar_value);

    quarters = balance/quater_value;
    balance =quarters*quater_value;

    dimes = balance/dime_value;
    balance =dimes*dime_value;

    nickels = balance/night_value;
    balance = nickels*night_value;

    pennis = balance;

    cout<<"Change in coins: \n";
    cout<<dollar<<" dollars \n";
    cout<<quarters<<" quarters \n";
    cout<<dimes<<" dimes \n";
    cout<<nickels<<" nickels \n";
    cout<<pennis<<" pennies \n";

    cout<<"---------------------"<<endl;
    cout<<"Solution using Modulo Operator"<<endl;
    cout<<"---------------------"<<endl;
    
    balance=dollar=quarters=dimes=nickels=pennis=0; // reset everything to zer0

    dollar = change_amount/dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance/quater_value;
    balance = balance % quater_value;

    dimes = balance/dime_value;
    balance = balance % dime_value;

    nickels = balance/night_value;
    balance = balance % night_value;

    pennis = balance;

    cout<<"Change in coins: \n";
    cout<<dollar<<" dollars \n";
    cout<<quarters<<" quarters \n";
    cout<<dimes<<" dimes \n";
    cout<<nickels<<" nickels \n";
    cout<<pennis<<" pennies \n";

    cout<<endl;
    return 0;

}