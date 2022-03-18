#include<iostream>
using namespace std;

int main(){
    system("cls");

    //! Creating a dynamic array of dimension n * m 
    // using an array of pointer: an array of pointers is created and then to each memory block
    int n = 10, m = 10;
    int * * ptr = new int * [n];
    
    for(int  i = 0; i < n; ++i)
        ptr[i] = new int[m];

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            ptr[i][j] = i + j + 10;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
            cout<<"  "<<ptr[i][j];
        cout<<endl;
    }
    

    for(int  i = 0; i < n; ++i)
        delete [] ptr[i];
    delete [] ptr;


    return 0;
}