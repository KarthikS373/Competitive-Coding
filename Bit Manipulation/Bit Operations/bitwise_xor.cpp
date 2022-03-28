#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    int n = 10;  // Even number
    int m = 15;  // Odd number

    //! BINARY XOR ' ^ '
    /*
        0 ^ 0 --> 0
        0 ^ 1 --> 1
        1 ^ 1 --> 0

        odd ^ odd   --> even
        odd ^ even  --> odd
        even ^ even --> even

        ? VERY IMPORTANT: x ^ x == 0
        ? x ^ y ^ x == y     x ^ x ^ y == y   y ^ x ^ x == y
    */
    cout<<n<<" & "<<m<<" = "<<(n&m)<<endl;

    //NOTE : (n ^ n) = 0 and (n ^ 0) = n
    cout<<"num ^ 0 : "<<(n ^ 0)<<endl;
    cout<<"a ^ a   : "<<(m ^ m)<<endl;

    /*
        & a ^ 0 = a
        & a ^ a = 0
        & (a ^ b) ^ c = a ^ (b ^ c) = (a ^ c) ^ b
    */
    
    
    return 0;
}