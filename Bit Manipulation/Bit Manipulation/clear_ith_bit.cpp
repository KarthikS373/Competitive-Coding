#include<bits/stdc++.h>
using namespace std;


int clearBit(int n, int pos){
    return (n & ( ~(1 << pos) ));
}


int main(){
    system("cls");
    int n = 10;  
    int m = 15;  
   //! clear i-th bit
    /*
        clearing means turning to 0
        Logic: x & 0 --> 0
        n:   _ _ _ _ _
               ^
            i-th bit
        to clear ith pos to 0 we can use ith pos & 0
    */
    int i = 0;
    cout<<"Clear the "<<i<<"-th bit of "<<n<<" is "<<clearBit(n, i)<<endl;
    cout<<"Clear the "<<i<<"-th bit of "<<m<<" is "<<clearBit(m, i)<<endl;
    
    return 0;
}