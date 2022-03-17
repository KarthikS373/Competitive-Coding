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
    
    //! binary_search
    // #include <algorithm>
    //  bool binary_search( iterator start, iterator end, const TYPE& val );
    //  bool binary_search( iterator start, iterator end, const TYPE& val, Comp f );
    // TODO RETURN VALUE : true if an element equivalent to val is found, and false otherwise.
    //* The binary_search() function searches from start to end for val. The elements between start and end that are searched should be in ascending order as defined by the < operator. Note that a binary search will not work unless the elements being searched are in order.
    //* If the function f is specified, then it is used to compare elements
    /*
        template <class ForwardIterator, class T>
        bool binary_search(ForwardIterator first, ForwardIterator last, const T &val)
        {
            first = std::lower_bound(first, last, val);
            return (first != last && !(val < *first));
        }
    */
    // Reminder - Binary search works only on sorted list
    std::sort(v.begin(), v.end());
    if (std::binary_search(v.begin(), v.end(), 3))
        std::cout << "found! at index " << binary_search(v.begin(), v.end(), 3) << endl;
    else
        std::cout << "not found.\n";
    // custom comparators can be used to do on pairs and all


   return 0;
}
    