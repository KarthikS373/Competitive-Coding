#include<iostream>
using namespace std;

void change1(const int * p){
    cout<<"change1"<<endl;
    cout<<" p is not const here but *p is const"<<endl;
    cout<<" p  : "<< p  <<endl;
    cout<<" *p : "<< *p <<endl;
    // (*p)++;  // Error *p is readonly
    p++; // possible
    cout<<" p  : "<< p  <<endl;
    cout<<" *p : "<< *p <<endl;
}

void change2(const int & p){
    cout<<"change2"<<endl;
    cout<<" p  : "<< p  <<endl;
    // (p)++;  // Error *p is readonly
}




int main(){
    system("cls");
    
    //! const values
    //  The const keyword specifies that a variable's value is constant and tells the compiler to prevent the programmer from modifying it.
    const int i = 10;
    // Const variables must be initialised and cannot be changed
    /* 
        Throws error:
            const int i;              
            const int i = 5; i = 10;
    */ 
    
    cout<<endl;
    //! const reference
    //? const reference to non const var
    int x = 10;
    const int &ref1 = x;
    cout<<" x : "<< x <<" ref1 : "<< ref1 <<endl;
    x++;
    cout<<" x : "<< x <<" ref1 : "<< ref1 <<endl;
    // ref1++; // Throws error

    //? const reference to const var
    const int y = 10;
    const int &ref2 = y;
    cout<<" y : "<< y <<" ref1 : "<< ref1 <<endl;
    // y++; // Throws error
    // ref2++; // Throws error

    //? non const reference to const var - error
    int const z = 10;
    // int &ref3 = z; // Throws error -  qualifiers dropped in binding reference of type "int &" to initializer of type "const int"
    

    //! const pointers
    //? const / non const pointer to const var
    int const a = 10;
    // int *ptr1 = &a;  // Throws error - cannot store address of const var in non const pointers
    int const *ptr1 = &a;

    //? const pointer to non const var
    int b = 10;
    int const *ptr2 = &b;

    //? const *
    int t1 = 10, t2 = 5;
    int const * p1 = &t1;
    p1 = &t2;  // p1 can point to another variable but *p is const
    // (*p)++; // Throws error
    
    int * const p2 = &t1;
    // p2 = &t2; // Throws error here p3 is a const 
    (*p2)++; // possible *p2 not a const

    int const * const p3 = &t1; // here both p3 as well as *p3 are const
    // (*p3)++;  // Throws error
    // p3 = &t2; // Throws error


    //! const in functions
    int var = 10;
    int  * ptr = &var;
    change1(ptr);
    change2(var);


    return 0;
}