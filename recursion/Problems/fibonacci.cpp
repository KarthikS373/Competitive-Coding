#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 1 || n ==2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void fibonacciSeries(int n){
    if(n == 0)
        return;
    fibonacciSeries(n - 1);
    cout<<fibonacci(n)<<" ";
}


int main(){
    system("cls");
    int n = 10;
    cout<< n <<"th element in fibonacci series is : "<< fibonacci(n) <<endl;
    cout<<"The first "<< n <<" elements of fibonacci series are : "<<endl;
    fibonacciSeries(n);


    return 0;
}