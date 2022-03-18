#include<iostream>
using namespace std;

void change1(int * * p){
    p++;  
}

void change2(int * * p){
    (*p)++;
}

void change3(int * * p){
    (**p)++;
}


int main(){
    system("cls");
    int i = 10;
    int * ptr = &i;
    int * * dptr = &ptr;
    cout<<" i          : "<< i     << endl;
    cout<<" *ptr       : "<< *ptr  << endl;
    cout<<" **dptr     : "<< **dptr<< endl;
    cout<<" &i         : "<< &i    << endl;
    cout<<" ptr        : "<< ptr   << endl;
    cout<<" *dptr      : "<< *dptr << endl; 
    cout<<" dptr       : "<< dptr  << endl;
    cout<<" &ptr       : "<< &ptr  << endl;
    cout<<" &dptr      : "<< &dptr << endl;
    

    cout<<endl<<endl;
    // Passing to functions
    cout<<" i          : "<< i     << endl;
    cout<<" ptr        : "<< ptr  << endl;
    cout<<" dptr       : "<< dptr  << endl;
    
    change1(dptr);
    cout<<"Change 1 "<<endl;
    cout<<" i          : "<< i     << endl;
    cout<<" ptr        : "<< ptr  << endl;
    cout<<" dptr       : "<< dptr  << endl;
    
    change2(dptr);
    cout<<"Change 2 "<<endl;
    cout<<" i          : "<< i     << endl;
    cout<<" ptr        : "<< ptr  << endl;
    cout<<" dptr       : "<< dptr  << endl;
    
    change3(dptr);
    cout<<"Change 3 "<<endl;
    cout<<" i          : "<< i     << endl;
    cout<<" ptr        : "<< ptr  << endl;
    cout<<" dptr       : "<< dptr  << endl;
    



    return 0;
}