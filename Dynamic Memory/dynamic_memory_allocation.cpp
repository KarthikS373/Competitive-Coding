#include<iostream>
using namespace std;

int main(){
    system("cls");

    //! Creating a dynamic variable in heap memory
    //? Total size used  =  sizeof(datatype) in heap + sizeof(pointer) in stack
    int * ptri = new int;    // takes sizeof(int) space in Heap and sizeof(ptri) space in stack
    *ptri = 10;
    cout<<"ptri   : "<< ptri  <<endl;
    cout<<"*ptri  : "<< *ptri <<endl;

    delete ptri;

    //! Creating a dynamic sized array
    //? Total size used  = [ sizeof(datatype) * size ] in heap + sizeof(pointer) in stack
    int size = 10;
    int * ptr = new int[size];
    ptr[0] = 0; 
    ptr[1] = 1;
    for(int i = 0; i < size; ++i)
        ptr[i] = i;

    for(int i = 0; i < size; ++i)
        cout<<"ptr["<<i<<"] = "<<ptr[i]<<endl;

    delete [] ptr;

    return 0;
}