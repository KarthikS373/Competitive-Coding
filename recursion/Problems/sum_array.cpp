#include<iostream>
using namespace std;

int sumArr(int arr[], int n){
    if(n == 1)
        return arr[0];
    
    return arr[0] + sumArr(arr + 1, n - 1); 
}

int main(){
    system("cls");
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/ sizeof(int);
    cout<<sumArr(arr, n)<<endl;
    
    return 0;
}