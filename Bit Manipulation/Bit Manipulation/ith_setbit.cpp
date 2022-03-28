#include<bits/stdc++.h>
using namespace std;


int ithBit(int n, int i){
    return (n & (1 << i) > 0) ? 1 : 0;
}


int main(){
    system("cls");
    int n = 10;  // Even number
    int m = 15;  // Odd number
    //! get i-th bit
    /*
        Logic: x & 1 --> x
        n:   _ _ _ _ _
               ^
            i-th bit
        to make 1 come in ith pos we use 1 << i
    */
    int i = 0;
    cout<<i<<"-th bit of "<<n<<" is "<<ithBit(n, i)<<endl;
    cout<<i<<"-th bit of "<<m<<" is "<<ithBit(m, i)<<endl;
    
    i = 3;
    cout<<i<<"-th bit of "<<n<<" is "<<ithBit(n, i)<<endl;
    cout<<i<<"-th bit of "<<m<<" is "<<ithBit(m, i)<<endl;
    
    i = 31;
    cout<<i<<"-th bit of "<<n<<" is "<<ithBit(n, i)<<endl;
    cout<<i<<"-th bit of "<<m<<" is "<<ithBit(m, i)<<endl;
    
    
    return 0;
}