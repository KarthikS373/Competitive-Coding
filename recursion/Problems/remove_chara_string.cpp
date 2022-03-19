#include<iostream>
using namespace std;

void removeChara(char str[], char a){
    if(str[0] == '\0')
        return;
    if(str[0] == a){
        for(int i = 0; str[i] != '\0'; ++i)
            str[i] = str[i + 1];
    }
    removeChara(str + 1, a);        
}

int main(){
    system("cls");
    char str[] = "aHaealalaoa aWaoaralada";
    char remove = 'a';

    removeChara(str, remove);
    cout<<str<<endl;
    
    return 0;
}