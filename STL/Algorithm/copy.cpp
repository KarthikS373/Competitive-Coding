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

    //! copy
    // #include <algorithm>
    // iterator copy( iterator start, iterator end, iterator dest );
    // TODO RETURN VALUE : An iterator to the end of the destination range where elements have been copied.
    //* The copy() function copies the elements between start and end to dest. In other words, after copy() has run
    /*
        template <class InputIterator, class OutputIterator>
        OutputIterator copy(InputIterator first, InputIterator last, OutputIterator result)
        {
            while (first != last)
            {
                *result = *first;
                ++result;
                ++first;
            }
            return result;
        }
    */
    copy(all(v), res.begin());
    vec(res);


   return 0;
}
    