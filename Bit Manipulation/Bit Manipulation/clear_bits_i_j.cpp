#include<bits/stdc++.h>
using namespace std;

int clearRangeBits(int n, int i, int j){
    int fhalf = ((~0) << (j + 1));
    int shalf = (1 << i) - 1;
    int mask = fhalf | shalf;
    return (n & mask);
}

int main(){
    system("cls");
    //! clear bits in range [i, j]
    int n = 10;
    int m = 15;
    /*
        ? (~0 == 111111111...11111) 32 1's
        * (~0) == -1 == 1111111.....11111
        Logic:(
               ....... _ _ _ _ _ ...... &
                       ^       ^
               1 1 1 1 0 0 0 0 0 1 1 1 1
            )

        * 1111...100000..00111..111    =     11111..110000000000..00 | 0000000...000011111..111
                                                    first half               second half
    */
    int i = 7;
    int j = 3;
    cout << "n after clearing last i bits : "<<clearRangeBits(n, i, j)<< endl;
    cout << "m after clearing last i bits : "<<clearRangeBits(m, i, j)<< endl;
    
    
    return 0;
}