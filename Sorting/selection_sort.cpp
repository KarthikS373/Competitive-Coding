// Time Complexity: O(n^2)
// Auxiliary Space: O(1) 

#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = x; 
    x = y;
    y = temp; 
}

void selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; ++i){
        int min = i;
        for(int j = i+1; j < n; ++j){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

void print(int arr[], int n){  
    for (int i=0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

int main(){
    system("cls");
    int arr[] = {64, 25, 12, 22, 11, 17, 34, 3, 22, 35, 66, 35, 83, 6, 22, 73}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<"Array         : ";print(arr, n);
    selection_sort(arr, n);
    cout<<"Sorted array  : ";print(arr, n);


    return 0;
}