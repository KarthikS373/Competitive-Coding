#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    int n = 10;  // Even number
    int m = 15;  // Odd number
    /*
        Odd number has last bit 1,
        Even number has last bit 0

        ...1 (odd)  & 1 --> 1
        ...0 (even) & 1 --> 0
    */

    cout<<"Even & 1 : "<<(n & 1)<<endl;
    cout<<"Odd  & 1 : "<<(m & 1)<<endl;

    
    
    return 0;
}