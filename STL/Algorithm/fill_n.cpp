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

    //! fill_n
    // #include <algorithm>
    //  iterator fill_n( iterator start, size_t n, const TYPE& val );
    //TODO RETURN VALUE : Iterator one past the last element assigned if count > 0, first otherwise
    //*Instead of assigning val to a range of elements, however, fill_n() assigns val to the first n elements starting at start.
    /*
        template<class OutputIt, class Size, class T>
        OutputIt fill_n(OutputIt first, Size count, const T& value){
            for (Size i = 0; i < count; i++) {
                *first++ = value;
            }
            return first;
        }
    */
    vec(v);
    fill_n(v.begin(), 10, -1);
    vec(v);

   return 0;
}
    