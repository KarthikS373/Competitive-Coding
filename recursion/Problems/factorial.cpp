#include<iostream>
using namespace std;

// factorial of n (n!) = 1 * 2 * 3 * 4 *...  * n
int factorial(int n){
    if(n == 0)
        return 1;
    return n * factorial(n-1);
}

int main(){
    system("cls");
    int n = 5;
    cout<<n<<"! = "<<factorial(n)<<endl;
    
    return 0;
}