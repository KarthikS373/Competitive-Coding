#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    int n = 10;  // Even number
    int m = 3;  // Odd number

    //! BINARY SHIFT
    //* left shift ' << '
    /*
         a << b --> all bits of a is shifted to left (<--) by 'b' number of places, end is filled with zeroes
     *   NOTE: a << b == (a * 2^b)
    */

    //* right shift ' >> '
    /*
         a << b --> all bits of a is shifted to right (-->) by 'b' number of places, end bits are discarded
     *   NOTE: a >> b == (a / 2^b)
    */

    //note a<<b = a * 2^b   and     a>>b = a / 2^b
    cout<<n<<"<<"<<m<<" : "<<(n<<m)<<endl;
    cout<<n<<">>"<<m<<" : "<<(n>>m)<<endl;
    


    return 0;
}