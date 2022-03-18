#include<iostream>
using namespace std;

int main(){
    system("cls");
    int i = 10;
    int * ptr = &i;

    char * pc  = (char *) ptr;
    char * pch = (char *) &i;

    cout<<" i    : " << i    << endl; 
    cout<<" *ptr : " << *ptr << endl; 
    cout<<" *pc  : " << *pc  << endl; 
    cout<<" *pch : " << *pch << endl; 
    cout<<" ptr  : " << ptr  << endl; 
    cout<<" pc   : " << pc   << endl; 
    cout<<" pch  : " << pch  << endl; 
    
    return 0;
}