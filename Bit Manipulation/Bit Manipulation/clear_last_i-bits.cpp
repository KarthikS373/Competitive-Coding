#include<bits/stdc++.h>
using namespace std;

int clearBits(int n, int i){
    int mask = ((~0) << i);
    return (n & mask);
}

int main(){
    system("cls");
    int n = 10;
    int m = 15;
    //! clear LAST i bits
    /*
        ? (~0 == 111111111...11111) 32 1's
        * (~0) == -1 == 1111111.....11111
        Logic:(
               ....... _ _ _ _ _ &
               1 1 1 1 0 0 0 0 0
               )
    */
    int i = 3;
    cout << "n after clearing last i bits : "<<clearBits(n, i)<< endl;
    cout << "m after clearing last i bits : "<<clearBits(m, i)<< endl;
    
    return 0;
}