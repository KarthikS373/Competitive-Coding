#include<bits/stdc++.h>
using namespace std;

int chara_int(char ch){
    return ch - '0';
}

char int_chara(char ch){
    return ch + '0';
}

int main(){
    system("cls");
    int a = 5;
    char b = '6';
    cout<<a<<" "<<b<<endl;
    cout<<typeid(a).name()<<" "<<typeid(b).name()<<endl;

    int b_ = chara_int(b);
    char a_ = int_chara(a);

    cout<<a_<<" "<<b_<<endl;
    cout<<typeid(a_).name()<<" "<<typeid(b_).name()<<endl;

    
    return 0;
}