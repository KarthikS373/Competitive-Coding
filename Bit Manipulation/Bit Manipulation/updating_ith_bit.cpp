#include<bits/stdc++.h>
using namespace std;

int updateBit(int n, int pos, int bit){
    if (bit == 0){
        return (n & (~(1 << pos)));
    }
    else{
        return (n | ((1 << pos)));
    }
}

int main(){
    system("cls");
    int n = 10; 
    int m = 15;
    //! updating i-th bit to x
    /*
        Logic: x & 0 --> 0  <> x | 1 --> 1
        n:   _ _ _ _ _
               ^
            i-th bit
    */
    int i = 0;
    cout<<"update the "<<i<<"-th bit of "<<n<<" to 1 is "<<updateBit(n, i, 1)<<endl;
    cout<<"update the "<<i<<"-th bit of "<<n<<" to 0 is "<<updateBit(n, i, 0)<<endl;
    cout<<"update the "<<i<<"-th bit of "<<m<<" to 1 is "<<updateBit(m, i, 1)<<endl;
    cout<<"update the "<<i<<"-th bit of "<<m<<" to 0 is "<<updateBit(m, i, 0)<<endl;
    

    
    return 0;
}