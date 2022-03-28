#include <bits/stdc++.h>
using namespace std;

// Test Vector
#define all(vec) vec.begin(), vec.end()
vector<int> v = {3, 6, 4, 9, 23, -23, 2, -11, 344, 0, 455, 3, 5, 6, 7, 3, 8, -6, 8, 3, 89, 90};
vector<int> v1 = {3, 6, 4, 9, 23, -23, 2, -11, 344, 0, 455, 3, 3, 4, 5, 6, 7, 3, 8, -6, 8, 3, 89, 90};
vector<int> contain(30);
array<int, 30> res;

// Print vector
template <typename T>
void vec(T v){
    for (auto &i : v)
        cout << i << " ";
    cout << endl;
}


//! Declaring of unary func
template<class TYPE> struct increment : public unary_function<TYPE, void> {
    void operator() (TYPE& x) {
        x++;
    }
}; 

int main(){

    #ifndef ONLINE_JUDGE
        freopen("output.txt", "w", stdout);
    #endif

    //! for_each
    //  #include <algorithm>
    //  UnaryFunction for_each( iterator start, iterator end, UnaryFunction f);
    // TODO RETURN VALUE :Returns f
    //* The for_each() algorithm applies the function f to each of the elements between start and end. The return value of for_each() is f
    /*
        template<class InputIterator, class Function>
        Function for_each(InputIterator first, InputIterator last, Function fn){
            while (first!=last) {
                fn (*first);
                ++first;
            }
            return fn;      // or, since C++11: return move(fn);
        }
    */
    vec(v);
    for_each( all(v), increment<int>() );
    vec(v);


   return 0;
}
    