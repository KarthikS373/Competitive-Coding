#include<iostream>
using namespace std;

int power(int x, int n){
    if(n == 0)
        return 1;
    return x * power(x, n - 1);
}

int main(){
    system("cls");
    int x = 5, n = 10;
    cout<<power(x, n)<<endl;
    
    return 0;
}