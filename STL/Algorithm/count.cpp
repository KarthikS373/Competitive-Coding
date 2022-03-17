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

    //! count
    // #include <algorithm>
    //  size_t count( iterator start, iterator end, const TYPE& val );
    //TODO RETURN VALUE : The number of elements in the range [first,last) that compare equal to val.
    //TODO                The return type (iterator_traits<InputIterator>::difference_type) is a signed integral type.
    //* The count() function returns the number of elements between start and end that match val.
    /*
        template <class InputIterator, class T>
        typename iterator_traits<InputIterator>::difference_type
            count (InputIterator first, InputIterator last, const T& val){
        typename iterator_traits<InputIterator>::difference_type ret = 0;
        while (first!=last) {
            if (*first == val) ++ret;
            ++first;
        }
        return ret;
        }
    */
    std::cout << "3 appears " << std::count (all(v), 3) << " times.\n";

   return 0;
}
    