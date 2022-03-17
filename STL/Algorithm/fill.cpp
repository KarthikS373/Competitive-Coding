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

int main(){

    #ifndef ONLINE_JUDGE
        freopen("output.txt", "w", stdout);
    #endif

    //! fill
    // #include <algorithm>
    //  void fill( iterator start, iterator end, const TYPE& val );
    //TODO RETURN VALUE : none
    //* The function fill() assigns val to all of the elements between start and end.
    /*
        template <class ForwardIterator, class T>
        void fill (ForwardIterator first, ForwardIterator last, const T& val){
            while (first != last) {
                *first = val;
                ++first;
            }
        }
    */
    vec(v);
    fill(all(v), 0);
    vec(v);

   return 0;
}
    