#include<iostream>
using namespace std;

int temp = 100;

void changeV(int i){
    i++;
}

void changeR(int &i){
    i++;
}

int &func1(){
    int a = 100;
    return a;
}

int *func2(){
    int a = 100;
    return &a;
}

int main(){
    system("cls");
    int i = 10;
    
    //! Refernce variables
    //? Normal variables
    int j = i;                              // creates a seperate memory block and copies content of i
    cout<<" i : "<< i <<"  j : "<< j <<endl;

    j++;
    cout<<" i : "<< i <<"  j : "<< j <<endl;
    i++;
    cout<<" i : "<< i <<"  j : "<< j <<endl;

    // Copying a temporary value
    j = temp;
    cout<<" i : "<< i <<"  j : "<< j <<endl;

    //? Refernce variables
    // * Note: declaring without initialising is not possible
    // int &x; x = i; // Throws an error
    int &x = i;
    cout<<" i : "<< i <<"  x : "<< x <<endl;
    
    x++;
    cout<<" i : "<< i <<"  x : "<< x <<endl;
    i++;
    cout<<" i : "<< i <<"  x : "<< x <<endl;

    // Copying a temporary value
    x = temp;
    cout<<" i : "<< i <<"  x : "<< x <<endl;

    cout<<endl;
    //! Passing to a function
    cout<<"Passing to functions"<<endl;
    // Pass by value
    changeV(i);
    cout<<" i : "<< i << endl;

    // Pass by reference
    changeR(i);
    cout<<" i : "<< i << endl;


    cout<<endl;
    //! Returning reference variable -- wrong method 
    //? NEVER return address of function local variables
    // int *var2 = func2();
    // cout<<" var2 : "<< var2 <<endl;

    // int &var1 = func1();
    // cout<<" var1 : "<< var1 <<endl;



    return 0;
}