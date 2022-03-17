#include<iostream>
using namespace std;

// Passing pointer as argument
void print(int *ptr){
    cout<<"Address : "<< ptr << endl;
    cout<<"Value   : "<< *ptr << endl;
}

// Passing pointer by value
void change(int * ptr){
    cout<<"Address in function before change : "<< ptr  << endl;
    cout<<"Value   in function before change : "<< *ptr << endl;
    ptr++;
    cout<<"Address in function after change  : "<< ptr  << endl;
    cout<<"Value   in function after change  : "<< *ptr << endl;
}

// Passing pointer by reference
void changeR(int * ptr){
    cout<<"Address in function before change : "<< ptr  << endl;
    cout<<"Value   in function before change : "<< *ptr << endl;
    (*ptr)++;
    cout<<"Address in function after change  : "<< ptr  << endl;
    cout<<"Value   in function after change  : "<< *ptr << endl;
}

// Array is always passed by reference
//  int arrFunc(int * arr, int n){}
void arrFunc(int arr[], int n){
    cout<<"Size of array in func() : "<< sizeof(arr) <<endl;
    for(int  i = 0; i < n; ++i){
        arr[i] = (100 - i);
    }
    cout<<"Array in func() : ";
    for(int  i = 0; i < n; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;
    return;
}

int main(){
    system("cls");
    int i = 10;
    int * ptr = &i;
    
    // Passing pointer as argument
    print(ptr);


    cout<<endl;
    // Call by value
    cout<<"Address                           : "<< ptr << endl;
    cout<<"Value                             : "<< *ptr << endl;
    change(ptr);
    cout<<"Address                           : "<< ptr << endl;
    cout<<"Value                             : "<< *ptr << endl;


    cout<<endl;
    // Call by Reference
    cout<<"Address                           : "<< ptr << endl;
    cout<<"Value                             : "<< *ptr << endl;
    changeR(ptr);
    cout<<"Address                           : "<< ptr << endl;
    cout<<"Value                             : "<< *ptr << endl;



    //! Array and functions
    //  * Array is always passed by reference hence any changes made in function is reflected in original array
    int size = 10;
    int arr[size];
    cout<<"Size of array in main() : "<< sizeof(arr) <<endl;
    arrFunc(arr, size);
    cout<<"Array in main() : ";
    for(int  i = 0; i < size; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;

    cout<<endl;
    // Passing only Last 6 elements
    arrFunc(arr + 4, size - 4);
    cout<<"Array in main() : ";
    for(int  i = 0; i < size; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;







    return 0;
}