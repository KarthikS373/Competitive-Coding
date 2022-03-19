#include<iostream>
using namespace std;

void print(char str[], int n){
    if(str[0] == '\0')
        return;
    cout<<str[0];
    print(str + 1, n - 1);
}

int main(){
    system("cls");
    char str[] = "Hello World";
    int size = sizeof(str)/ sizeof(char);
    print(str, size);
    
    return 0;
}