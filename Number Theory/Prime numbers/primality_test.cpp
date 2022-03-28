//~ A primality test is an algorithm for determining whether an input number is prime

#include<bits/stdc++.h>
using namespace std;


//! Method 1 : Trial Divsion - naive approach
//? The simplest primality test is trial division: given an input number, n, check whether it is evenly divisible by any prime number between 2 and √n (i.e. that the division leaves no remainder). If so, then n is composite. Otherwise, it is prime
// * Time complexity = O(sqrt(n))
bool trial_div(int n){
    if(n == 1 || n == 0) return false;
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0)
            return false;
    }
    return true;
}

//! Method 2 : Fermat primality test
//? (a ^ p) - a is a multiple of p for all value of 'a' in [1, p]
//& fails in case of 561

int main(){

    freopen("output.txt", "w", stdout);

    int n = 10, m = 29;
    cout<<" trial_div("<<n<<") : "<<trial_div(n)<<endl;
    cout<<" trial_div("<<m<<") : "<<trial_div(m)<<endl;
    

    
    return 0;
}