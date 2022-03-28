#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    int n = 10;  // Even number
    int m = 15;  // Odd number

    //! BINARY OR ' | '
    /*
        * The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. In C Programming, bitwise OR operator is denoted by |.
        0 | 0 --> 0
        0 | 1 --> 1
        1 | 1 --> 1

        odd | odd   --> odd
        odd | even  --> odd
        even | even --> even
    */

    cout<<n<<" | "<<m<<" = "<<(n|m)<<endl;

    cout<<"Even | 1 : "<<(n | 1)<<endl;
    cout<<"Odd  | 1 : "<<(m | 1)<<endl;
    cout<<"Even | 0 : "<<(n | 0)<<endl;
    cout<<"Odd  | 0 : "<<(m | 0)<<endl;
    


    return 0;
}