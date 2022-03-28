#include<bits/stdc++.h>
using namespace std;

bool pow2(int n){
    if(n < 0) return false;
    return (!(n & (n-1)));
}

int main(){
    system("cls");
    int n = 1024;  // power of 2
    int m = 5565230;  // not power of 2

    /* 
        note: i & (i - 1) flips the rightmost bit
        * Logic : if a number is power of 2 it has only one set bit

        ie: if n = 2 ^ x
            n & (n - 1) = 0
    */
    cout<<"Power of 2 ("<<n<<") : "<<pow2(n)<<endl;
    cout<<"Power of 2 ("<<m<<") : "<<pow2(m)<<endl;
    
    return 0;
}