#include<bits/stdc++.h>
using namespace std;

int charToDigit(char ch){
    return ch - '0';
}

char digitToChar(int ch){
    return ch + '0';
}

string addition(string s1, string s2){
    string res = "";
    if(s1.length() > s2.length()) swap(s1, s2);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int carry = 0;
    for(int i = 0; i < s1.length(); ++i){
        int dig1 = (charToDigit(s1[i]));
        int dig2 = (charToDigit(s2[i]));
        int sum = dig1 + dig2 + carry;
        res.push_back(digitToChar(sum % 10));
        carry = sum / 10;
    }
    for(int i = s1.length(); i < s2.length(); ++i){
        int dig2 = (charToDigit(s2[i]));
        int sum = dig2 + carry;
        carry = sum / 10;
        res.push_back(digitToChar(sum % 10));
    }
    if(carry)
        res.push_back('1');
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    system("cls");
    string s1, s2;
    // cin>>s1>>s2;
    s1 = "133546257683638";
    s2 = "487459348467";

    string res = addition(s1, s2);
    cout<<res<<endl;

    // Check to match results
    // cout<<(133546257683638 + 487459348467)<<endl;
    
    return 0;
}