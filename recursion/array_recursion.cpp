#include<iostream>
using namespace std;

// Print
void printA(int arr[], int size){
    if(size == 0)
        return;
    cout<<arr[0]<<" ";
    printA(arr + 1, size - 1);
}

// Print reverse
void printR(int arr[], int size){
    if(size == 0)
        return;
    printR(arr + 1, size - 1);
    cout<<arr[0]<<" ";
}

int main(){
    system("cls");
    int size  = 9;
    int arr[size];
    for(int i = 0; i < size; ++i)
        arr[i] = i;
    
    printA(arr, 9);
    cout<<endl;
    printR(arr, 9);
    
    
    return 0;
}