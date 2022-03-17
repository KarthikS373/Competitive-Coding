#include<iostream>
using namespace std;

int main(){
    system("cls");
    int size = 10;
    int arrI[size]; float arrF[size]; double arrD[size];

    // sizeof(array) = size * sizeof(datatype)
    cout<<"Size of int array is     : " << sizeof(arrI)  <<endl;
    cout<<"Size of float array is   : " << sizeof(arrF)  <<endl;
    cout<<"Size of douvle array is  : " << sizeof(arrD)  <<endl;

    cout<<endl;
    //! Array as pointer 
    // * &arr[n] = arr + n
    // * arr[n] = *(arr + n)
    int arr[size];
    cout<<"Value of arr      : "<< arr     <<endl;
    cout<<"Value of &arr[0]  : "<< &arr[0] <<endl;
    cout<<"Value of arr + 1  : "<< arr + 1 <<endl;
    cout<<"Value of &arr[1]  : "<< &arr[1] <<endl;
    cout<<"Value of arr + 2  : "<< arr + 2 <<endl;
    cout<<"Value of &arr[2]  : "<< &arr[2] <<endl;

    cout<<"Value at *arr       : "<< *arr       <<endl;
    cout<<"Value at arr[0]     : "<< arr[0]     <<endl;
    cout<<"Value at *(arr + 1) : "<< *(arr + 1) <<endl;
    cout<<"Value at arr[1]     : "<< arr[1]     <<endl;
    cout<<"Value at *(arr + 2) : "<< *(arr + 2) <<endl;
    cout<<"Value at arr[2]     : "<< arr[2]     <<endl;

    cout<<endl;
    //? NOTE : arr[i] == *(arr + i) == i[arr]
    int i = 2;
    cout<<"Value at *(arr + i) : "<< *(arr + i) <<endl;
    cout<<"Value at arr[i]     : "<< arr[i]     <<endl;
    cout<<"Value at i[arr]     : "<< i[arr]     <<endl;

    cout<<endl;
    // pointer to array
    int * ptr = arr; // int * ptr = &arr[0];
    cout<<"Size of array is     : " << sizeof(arr)  <<endl;
    cout<<"Size of ptr is       : " << sizeof(ptr)  <<endl; // Size of pointer is independent of variable pointed by it
    cout<<"Value of arr         : "<< arr           <<endl;
    cout<<"Value of ptr         : "<< ptr           <<endl;
    cout<<"Value at *arr        : "<< *arr          <<endl;  
    cout<<"Value at *ptr        : "<< *ptr          <<endl; 

    cout<<endl;
    // Note: &arr != &ptr
    cout<<"&arr : "<< &arr <<endl;
    cout<<"&ptr : "<< &ptr <<endl;

    //? NOTE : arr is not modifiable while ptr is not
    // arr++; // Throws error
    // ptr++; // Increments ptr 






    
    return 0;
}