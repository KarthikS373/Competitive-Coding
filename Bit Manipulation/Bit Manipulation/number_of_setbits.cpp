#include<bits/stdc++.h>
using namespace std;


int numberOfSetbits(int n){
    int count = 0;
    while(n > 0){
        if(n & 1)
            count++;
        n >>= 1;
    }
    return count;
}


int numberOfSetbits_pow2(int n){
    int count = 0;
    while(n > 0){
        count ++;
        n = n & (n-1);
    }
    return count;
}

#define popcount(x) __builtin_popcount(x)   // count the number of set bits in an integer
#define popcountl(x) __builtin_popcountl(x)   // count the number of set bits in an long
#define popcountll(x) __builtin_popcountll(x)   // count the number of set bits in an long long

int main(){
    system("cls");
    int n = 10;  // Even number
    int m = 15;  // Odd number
    //! number of setbits
    /*
        Logic: x & 1 --> x
        n:   _ _ _ _ _
               ^
            i-th bit
        n & 1 till n > 0
    */
    cout<<"Number of set bits in "<<n<<" : "<<numberOfSetbits(n)<<endl;
    cout<<"Number of set bits in "<<m<<" : "<<numberOfSetbits(m)<<endl;
    

    /*
        Logic: keep on operating on n & (n - 1)
        note : i & (i - 1) flips the rightmost bit ----- very important
        note : . . . 1 0 0 0 - 1 = . . . 0 1 1 1 
    */
    cout<<"Number of set bits in "<<n<<" : "<<numberOfSetbits_pow2(n)<<endl;
    cout<<"Number of set bits in "<<m<<" : "<<numberOfSetbits_pow2(m)<<endl;
    
    /*
        __builtin_popcount(x)     // count the number of set bits in an integer
        __builtin_popcountl(x)    // count the number of set bits in an long
        __builtin_popcountll(x)   // count the number of set bits in an long long
    */
    
    cout<<"Number of set bits in "<<n<<" : "<<popcount(n)<<endl;
    cout<<"Number of set bits in "<<m<<" : "<<popcount(m)<<endl;

    
    return 0;
}