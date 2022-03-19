#include<iostream>
using namespace std;

bool isPresent(int arr[], int n, int const &ele){
    if(n == 0)
        return false;
    else if(arr[0] == ele)
        return true;
    isPresent(arr + 1, n - 1, ele);
}

int main(){
    system("cls");
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 25};
    int arr2[] = {4, 2, 12, 7, 3, 2, 1, 5, 4};
    int element1 = 12;
    int element2 = 25;
    int size1 = sizeof(arr1)/ sizeof(int);
    int size2 = sizeof(arr2)/ sizeof(int);
    cout<<isPresent(arr1, size1, element1)<<endl;
    cout<<isPresent(arr2, size2, element1)<<endl;
    cout<<isPresent(arr1, size1, element2)<<endl;
    cout<<isPresent(arr2, size2, element2)<<endl;

    return 0;
}