#include<iostream>
using namespace std;

int noOfDigits(int n){
    if(n / 10 == 0)
        return 1;
    return 1 + noOfDigits(n / 10);
}


int main(){
    system("cls");
    int n = 102455;
    cout<<"number of digits in "<< n <<" : "<< noOfDigits(n) <<endl;
    
    return 0;
}