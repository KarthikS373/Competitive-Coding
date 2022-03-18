#include<iostream>
using namespace std;

// C++ provides an inline functions to reduce the function call overhead.
// Inline function is a function that is expanded in line when it is called.
// When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call.
// This substitution is performed by the C++ compiler at compile time. Inline function may increase efficiency if it is small.

inline int sum(int a, int b){
    return a + b;
}

int main(){
    system("cls");
    int x = 10, y = 20;
    cout << sum(x, y) << endl; 
    
    return 0;
}