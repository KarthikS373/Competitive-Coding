#include<iostream>
using namespace std;

int main(){
    system("cls");
    int i = 10;
    int * ptri = &i;
    float f = 10.02;
    float * ptrf = &f;
    int * ptr_null = 0;
    double d =10.3525;
    double * ptrd = &d;

    //! Sizeof pointer
    cout<<"Size of int pointer is      :"<< sizeof(ptri) <<endl;
    cout<<"Size of float pointer is    :"<< sizeof(ptrf) <<endl;
    cout<<"Size of double pointer is   :"<< sizeof(ptrd) <<endl;

    cout<<"Address of ptri :"<<ptri<<endl;
    cout<<"Address of ptrf :"<<ptrf<<endl;
    cout<<"Address of ptrd :"<<ptrd<<endl;

    //! Incrementing a Pointer
    // ptr++ -> ptr = ptr + sizeof(data_type)
    cout<<endl;
    cout<<"Increment"<<endl;
    ptri++;
    cout<<"Address of ptri :"<<ptri<<endl;
    ptrf++;
    cout<<"Address of ptrf :"<<ptrf<<endl;
    ptrd++;
    cout<<"Address of ptrd :"<<ptrd<<endl;

    //! Decrementing a Pointer
    // ptr-- -> ptr = ptr - sizeof(data_type)
    cout<<endl;
    cout<<"Decrement"<<endl;
    ptri--;
    cout<<"Address of ptri :"<<ptri<<endl;
    ptrf--;
    cout<<"Address of ptrf :"<<ptrf<<endl;
    ptrd--;
    cout<<"Address of ptrd :"<<ptrd<<endl;

    //! Addition / Subtraction
    // ptr = ptr + n ---> ptr = ptr + n * sizeof(datatype)
    // ptr = ptr - n ---> ptr = ptr - n * sizeof(datatype)
    cout<<endl;
    cout<<"Addition"<<endl;
    ptri += 5;
    cout<<"Address of ptri :"<<ptri<<endl;
    ptrf += 7;
    cout<<"Address of ptrf :"<<ptrf<<endl;
    ptrd += 1;
    cout<<"Address of ptrd :"<<ptrd<<endl;
    cout<<endl;
    cout<<"Subtraction"<<endl;
    ptri -= 5;
    cout<<"Address of ptri :"<<ptri<<endl;
    ptrf -= 7;
    cout<<"Address of ptrf :"<<ptrf<<endl;
    ptrd -= 3;
    cout<<"Address of ptrd :"<<ptrd<<endl;
    
    return 0;
}