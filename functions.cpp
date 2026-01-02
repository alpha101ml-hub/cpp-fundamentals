#include <iostream>
using namespace std;

// void printHello(){
//     cout<<"hello\n";
// }
// int printHello(){
//     cout<<"hello\n";
//     return 3;
// }

// int sum(int a, int b){
//     int s = a + b;
//     return s;
// }

// double sum(double a, double b){
//     double s = a + b;
//     return s;
// }

// int min(int a, int b){
//     if (a < b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int sumN(int n){
//     int sum =0;

//     for (int i=1; i<=n; i++){
//         sum += i;
//     }
//     return sum;
// }

// int factorialN(int n){
//     int fact = 1;

//     for (int i =1; i<=n; i++){
//         fact *=i;
//     }

//     return fact;
// }

// int fun(){
//     int x =25;
//     cout<<"x = "<<x<<endl;
//     return 2;
//     cout<<"hello\n";
// }

// void fun(){
//     return; // control
// }

// int sum(int a, int b){
//     a=a+10;
//     b=b+10;
//     return a+b;
// }

// void changeX(int x){
//     x = 2*x;
//     cout<<"x = "<<x<<endl;
// }

// int sumOfDigits(int num){
//     int digSum = 0;
    
//     while(num > 0){
//         int lastDig = num % 10;
//         num /= 10;
        
//         digSum += lastDig;
//     }
// }
// int factorialN(int n){
//     int fact = 1;
//     for (int i =1; i<=n; i++){
//         fact *=i;
//     }     
//     return fact;
// }

// int nCr(int n, int r){
//     int fact_n = factorialN(n);
//     int fact_r = factorialN(r);
//     int fact_nmr = factorialN(n-r);

//     return fact_n/(fact_r * fact_nmr);
// }

int isprime(int n){
    if (n <= 1){
        return 0;
    }
    if (n <=3){
        return 1;    
    }

    if (n % 2 ==0 || n % 3 == 0){
        return 0;
    }
    
    for (int i =5; i*i <= n; i +=6){
        if (n % i ==0 || n % (i + 2) ==0){
            return 0;
        }
    }

}

void printPrimes( int n){
    for (int i =2; i <= n; i++){
        if (isprime(i)){
            cout<<i<<" "<<endl;
        }
    }
}

long long Fibonacci(int n){
    if (n <= 1){
        return n;
    }

    long long prev =0;
    long long curr =1;
    long long next;

    for (int i =2; i <= n; i++){
        next = prev + curr;
        cout<<" "<<next;
        prev = curr;
        cout<<" "<<prev;
        curr = next;
    }
    cout<<"\nfibonacci series = "<<next<<endl;
    return curr;
}

int main(){
    // cout<<"Hello";

    // function call / invoke
    // printHello();
    // int val =printHello();
    // cout<<"val = "<<val<<endl;
    // cout<< printHello()<<endl;

    // cout<< sum(10,5);

    // cout<< sum(10.999,5.0001);

    // cout<<"min =";
    // cout<< min(10,5);

    // cout<<"sum of numbers from 1 to N = "<<sumN(5)<<endl;
    // cout<<"sum of numbers from 1 to N = "<<sumN(10)<<endl;

    // cout<<"factorial of N = "<<factorialN(4)<<endl;
    // cout<<"factorial of N = "<<factorialN(5);

    // fun();
    // cout<<x<<endl;

    // fun():
    // int x =5, y=4;
    // cout<< sum(x,y);

    // int a =5, b=4;
    // cout<< sum(a,b)<<endl;;
    // cout<<"a = "<<a<<endl;
    // cout<<"b = "<<b<<endl;

    // int x =5;
    // changeX(x);
    // cout<<"x = "<<x<<endl;

    // cout<<"sum = "<<sumOfDigits(2356)<<endl;

    // int n =6, r=3;
    // cout<<nCr(n,r)<<endl;

    int n =29;
    if (isprime(n)){
        cout<<n<<" is prime"<<endl;
    }
    else{
        cout<<n<<" is not prime"<<endl;
    }
    
    cout<<"Primes upto "<<n<<" are: ";
    printPrimes(n);

    Fibonacci(10);

    return 0;
}