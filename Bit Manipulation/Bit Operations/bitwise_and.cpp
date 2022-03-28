#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    int n = 10;  // Even number
    int m = 15;  // Odd number

    //! BINARY AND ' & '
    /*
        * The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0.
        0 & 0 --> 0
        0 & 1 --> 0
        1 & 1 --> 1

        odd & odd   --> odd
        odd & even  --> even
        even & even --> even
    */
    cout<<n<<" & "<<m<<" = "<<(n&m)<<endl;

    //NOTE : (odd & 1) == 1   and   (even & 1) == 0
    cout<<"Even & 1 : "<<(n & 1)<<endl;
    cout<<"Odd  & 1 : "<<(m & 1)<<endl;
    cout<<"Even & 0 : "<<(n & 0)<<endl;
    cout<<"Odd  & 0 : "<<(m & 0)<<endl;
    
    
    return 0;
}