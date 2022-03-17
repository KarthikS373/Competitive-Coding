#include<iostream>
using namespace std;

int main(){
    system("cls");
    //! int pointer vs char pointer
    int i[]  = {1, 2, 3};
    char c[] = {'a', 'b', 'c'};
    char s[] = "abc";
    cout<<" i : "<< i <<endl;
    cout<<" c : "<< c <<endl;
    cout<<" s : "<< s <<endl;
    int  * ptri = &i[0]; 
    char * ptrc = &c[0]; 
    char * ptrs = &s[0]; 
    cout<<" ptri  : " << i <<endl;
    cout<<" ptrc  : " << c <<endl;
    cout<<" ptrs  : " << s <<endl;
    char ch = 'a';
    char * ptrch = &ch;
    cout<<" ch     :"<< ch     <<endl;
    cout<<" *ptrch :"<< *ptrch <<endl;
    cout<<" &ch    :"<< &ch    <<endl;
    cout<<" ptrch  :"<< ptrch  <<endl;
    
    //? NOTE:
    // char str[] = "Hello world"; // Creates a temporary variable with string "Hello world" and copy it to str
    // char * ptr = "Hello world"; // Creates a temporary variable with string "Hello world" and ptr points to it -- wrong method (ISO C++ forbids converting a string constant to 'char*')
    
    


    return 0;
}