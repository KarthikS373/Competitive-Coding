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
    
    //! copy_n
    // #include <algorithm>
    // iterator copy_n( iterator from, size_t num, iterator to ); 
    // TODO RETURN VALUE : An iterator to the end of the destination range where elements have been copied.
    //* The copy_n() function copies num elements starting at from to the destination pointed at by to. To put it another way, copy_n() performs num assignments and duplicates asubrange
    /*
        template<class InputIterator, class Size, class OutputIterator>
        OutputIterator copy_n (InputIterator first, Size n, OutputIterator result){
            while (n>0) {
                *result = *first;
                ++result; ++first;
                --n;
            }
        return result;
        }
    */
    int n = 7;
    std::copy_n( v.begin(), n, res.begin() );
    vec(res);



   return 0;
}
    