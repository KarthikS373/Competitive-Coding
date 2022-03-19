#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n == 1)
        return true;
    
    return arr[0] <= arr[1] && isSorted(arr + 1, n - 1);
}

int main(){
    system("cls");
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[] = {4, 2, 1, 7, 3, 2, 1, 5, 4};

    cout<<(isSorted(arr1, 9))<<endl;
    cout<<(isSorted(arr2, 9))<<endl;
    
    return 0;
}