#include<iostream>
using namespace std;

/*
    A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the caller of the function doesn’t provide a value for the argument with a default value.
    In case any value is passed the default value is overridden.
*/

int sum(int arr[], int size, int start = 0){
    int sum = 0;
    for(int i = start; i < size; ++i)
        sum += arr[i];

    return sum;
}


int main(){
    system("cls");
    int n = 10;
    int arr[n];

    for(int  i = 0; i < n; i++)
        arr[i] = i + 10; 

    cout<<"Sum of last 5 elements : "<<sum(arr, n, 5)<<endl;
    cout<<"Sum of all n elements  : "<<sum(arr, n)<<endl;

    
    return 0;
}