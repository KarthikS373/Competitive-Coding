#include<iostream>
using namespace std;

int length(char str[]){
    if(str[0] == '\0')
        return 0;
    return 1 + length(str + 1);
}

int main(){
    system("cls");
    char str[] = "Hello world";

    cout<<"The length of "<< str <<" is " << length(str) << endl;
    

    return 0;
}