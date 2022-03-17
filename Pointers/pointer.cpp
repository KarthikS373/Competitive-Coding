#include<iostream>
using namespace std;

//! NOTES :
//       * sizeof(pointer) is not dependent on datatype

int main(){
    system("cls");
    cout<<endl;
    // Integer pointer
    int i = 10;
    int * ptri;
    ptri = &i;
    cout<<"Value of i      : "<< i     <<endl;
    cout<<"Value of i      : "<< *ptri <<endl;
    cout<<"Value at ptri   : "<< *ptri <<endl;
    cout<<"Address of i    : "<< &i    <<endl;
    cout<<"Address of i    : "<< ptri  <<endl;
    cout<<"Address of ptri : "<< &ptri <<endl;
    cout<<"Sizeof ptri     : "<< sizeof(ptri) <<endl;

    // Float pointer
    float f = 10.02;
    float * ptrf;
    ptrf = &f;
    cout<<"Value of f      : "<< f     <<endl;
    cout<<"Value of f      : "<< *ptrf <<endl;
    cout<<"Value at ptrf   : "<< *ptrf <<endl;
    cout<<"Address of f    : "<< &f    <<endl;
    cout<<"Address of f    : "<< ptrf  <<endl;
    cout<<"Address of ptrf : "<< &ptrf <<endl;
    cout<<"Sizeof ptrf     : "<< sizeof(ptrf) <<endl;   
    
    // double pointer
    double d = 10.02922;
    double * ptrd;
    ptrd = &d;
    cout<<"Value of d      : "<< d     <<endl;
    cout<<"Value of d      : "<< *ptrd <<endl;
    cout<<"Value at ptrd   : "<< *ptrd <<endl;
    cout<<"Address of d    : "<< &d    <<endl;
    cout<<"Address of d    : "<< ptrd  <<endl;
    cout<<"Address of ptrd : "<< &ptrd <<endl;
    cout<<"Sizeof ptrd     : "<< sizeof(ptrd) <<endl;

    cout<<endl;
    // Creating a variable copy
    int a = i; // creates a copy
    a++; 
    cout<<"Value of i      : "<< i     <<endl;
    cout<<"Value of a      : "<< a     <<endl;
    cout<<"Value of *ptri  : "<< *ptri <<endl;

    int b = *ptri; // creates a copy
    b++; 
    cout<<"Value of i      : "<< i     <<endl;
    cout<<"Value of b      : "<< b     <<endl;
    cout<<"Value of *ptri  : "<< *ptri <<endl;

    cout<<endl;
    // Changing value of i
    i = 27;
    cout<<"Value of i      : "<< i     <<endl;
    cout<<"Value of *ptri  : "<< *ptri <<endl;
    cout<<"Address of i    : "<< ptri  <<endl;

    
    *ptri = 45;
    cout<<"Value of i      : "<< i     <<endl;
    cout<<"Value of *ptri  : "<< *ptri <<endl;
    cout<<"Address of i    : "<< ptri  <<endl;

    cout<<endl;
    // Incrementing
    i++;
    cout<<"Value of i      : "<< i     <<endl;
    cout<<"Value of *ptri  : "<< *ptri <<endl;
    cout<<"Address of i    : "<< ptri  <<endl;

    (*ptri)++;
    cout<<"Value of i      : "<< i     <<endl;
    cout<<"Value of *ptri  : "<< *ptri <<endl;
    cout<<"Address of i    : "<< ptri  <<endl;


    cout<<endl;
    // Copying into new pointer
    int * prti_cpy1 = &i;
    int * prti_cpy2 = ptri;
    cout<<"Value of i      : "<< i          <<endl;
    cout<<"Value of *ptri  : "<< *ptri      <<endl;
    cout<<"ptri            : "<< ptri       <<endl;
    cout<<"*ptri_cpy1      : "<< *prti_cpy1 <<endl;
    cout<<"*ptri_cpy2      : "<< *prti_cpy2 <<endl;
    cout<<"prti_cpy1       : "<< prti_cpy1  <<endl;
    cout<<"prti_cpy2       : "<< prti_cpy2  <<endl;


    cout<<endl;
    // Declaring a pointer will initialise to garbage location
    int * ptr_garbage; // - prevent pointing to garbage location by declaring null pointer
    int * ptr_null = 0;
    cout<<"Address         : "<< ptr_garbage <<endl;
    cout<<"Address         : "<< ptr_null <<endl;
    cout<<"*ptr_null       : "<< *ptr_null <<endl; // Segmentation fault
    cout<<"*ptr_garbage    : "<< *ptr_garbage <<endl; // might terminate prgm if trying to access restricted values 

    cout<<endl<<endl;
    return 0;
}