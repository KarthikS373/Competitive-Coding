#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    int n = 10;  // Even number
    int m = 15;  // Odd number

    //! BINARY NOT ' ~ '
    /*
        ~0 --> 1
        ~1 --> 0
    */
   


    //NOTE : ~0 = -1
    cout<<" ~"<< n <<" : "<<(~n)<<endl;
    cout<<" ~"<< m <<" : "<<(~m)<<endl;

    n = 0; m = -1;
    cout<<" ~"<< n <<" : "<<(~n)<<endl;
    cout<<" ~"<< m <<" : "<<(~m)<<endl;
    
    
    return 0;
}