// Worst and Average Case Time Complexity: O(n*n) -- array reverse sorted.
// Best Case Time Complexity: O(n).               -- array already sorted.
// Auxiliary Space: O(1)

#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = x; 
    x = y;
    y = temp; 
}

void print(int arr[], int n){  
    for (int i=0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

void bubble_sort(int arr[], int n){
    for(int i = 0; i < n; ++i){
        for(int j = i; j < n; j++){
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

int main(){
    system("cls");
    int arr[] = {64, 25, 12, 22, 11, 17, 34, 3, 22, 35, 66, 35, 83, 6, 22, 73}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<"Array         : ";print(arr, n);
    bubble_sort(arr, n);
    cout<<"Sorted array  : ";print(arr, n);

    
    return 0;
}