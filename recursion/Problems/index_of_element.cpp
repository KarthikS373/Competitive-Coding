#include<iostream>
using namespace std;

// First Index of occurance
int IndexOF(int arr[], int n, int const &ele, int const &index = 0){
    if(n == 0)
        return -1;
    
    else if(arr[0] == ele)
        return index;
    
    return IndexOF(arr + 1, n - 1, ele, index + 1);
    
}

// Last Index of occurance
int IndexOFL(int arr[], int n, int const &ele){
    if(n <= 0)
        return -1;

    if(arr[n - 1] == ele)
        return n - 1;
    else
        return IndexOFL(arr, n - 1, ele);
    
}


int main(){
    system("cls");
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 25, 4, 6, 9, 10, 24, 15, 25, 9, 8, 99, 76};
    int arr2[] = {4, 2, 12, 7, 3, 2, 1, 5, 4, 4, 0, 3, 19, 93, 123, 44, 34, 12, 0};
    int element1 = 12;
    int element2 = 25;
    int size1 = sizeof(arr1)/ sizeof(int);
    int size2 = sizeof(arr2)/ sizeof(int);
    cout<<IndexOF(arr1, size1, element1)<<endl;
    cout<<IndexOF(arr2, size2, element1)<<endl;
    cout<<IndexOF(arr1, size1, element2)<<endl;
    cout<<IndexOF(arr2, size2, element2)<<endl;
    cout<<endl;
    cout<<IndexOFL(arr1, size1, element1)<<endl;
    cout<<IndexOFL(arr2, size2, element1)<<endl;
    cout<<IndexOFL(arr1, size1, element2)<<endl;
    cout<<IndexOFL(arr2, size2, element2)<<endl;
    
    return 0;
}