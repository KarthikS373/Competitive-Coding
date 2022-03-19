#include<iostream>
using namespace std;

// Descending 
void printND(int n){
    if(n == 1){
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    printND(n - 1);
}

// Ascending 
void printNA(int n){
    if(n == 1){
        cout<<1<<" ";
        return;
    }
    printNA(n - 1);
    cout<<n<<" ";
}

int main(){
    system("cls");
    int n = 10;
    printND(n);
    cout<<endl;
    printNA(n);
    
    return 0;
}