#include<iostream>
using namespace std;

int indices(int arr[], int n, int &ele, int res[]){
    if(n == 0){
        return 0;
    }

    int size = indices(arr + 1, n - 1, ele, res);

    if(arr[0] == ele){
        for(int i = size - 1; i >= 0; i--)
            res[i + 1] = res[i] + 1;
        res[0] = 0;
        size++;
        
    } else {
        for (int i = size - 1; i >= 0; i--) 
            res[i] = res[i] + 1;
    }

    return size;

}


void AllIndexes(int input[], int n, int x){
    int output[n];
    int size = indices(input, n, x, output);
    if(size == 0)
        cout<< -1;
    else
    for (int i = 0; i < size; i++)
        cout << output[i] << " ";
}

int main(){
    system("cls");
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 25, 4, 6, 9, 10, 24, 15, 25, 9, 8, 99, 76};
    int arr2[] = {4, 2, 12, 7, 3, 2, 1, 5, 4, 4, 0, 3, 19, 93, 123, 44, 34, 12, 0};
    int element1 = 12;
    int element2 = 25;
    int size1 = sizeof(arr1)/ sizeof(int);
    int size2 = sizeof(arr2)/ sizeof(int);

    
    
    AllIndexes(arr1, size1, element1);
    cout<<endl;
    AllIndexes(arr2, size2, element2);
    cout<<endl;
    AllIndexes(arr2, size2, element1);
    cout<<endl;
    AllIndexes(arr1, size1, element2);
    cout<<endl;

    return 0;
}