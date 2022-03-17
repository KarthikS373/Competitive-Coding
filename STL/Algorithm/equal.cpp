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

    //! equal
    // #include <algorithm>
    // bool equal( iterator start1, iterator end1, iterator start2 );
    // bool equal( iterator start1, iterator end1, iterator start2, BinPred p );
    //TODO RETURN VALUE : true if all the elements in the range [first1,last1) compare equal to those of the range starting at first2, and false otherwise.
    //* The equal() function returns true if the elements in two ranges are the same. The first range of elements are those between start1 and end1. The second range of elements has the same size as the first range but starts at start2.
    /* 
        template <class InputIterator1, class InputIterator2>
        bool equal ( InputIterator1 first1, InputIterator1 last1, InputIterator2 first2 ){
            while (first1!=last1) {
                if (!(*first1 == *first2))   // or: if (!pred(*first1,*first2)), for version 2
                return false;
                ++first1; ++first2;
            }
        return true;
        }
    */
    if ( std::equal (all(v), v1.begin()) )
        std::cout << "The contents of both sequences are equal.\n";
    else
        std::cout << "The contents of both sequences differ.\n";
    copy(all(v), v1.begin());
    if ( std::equal (all(v), v1.begin()) )
        std::cout << "The contents of both sequences are equal.\n";
    else
        std::cout << "The contents of both sequences differ.\n";

        
    // Using custom
    if ( std::equal (all(v), v1.begin(), [](int a, int b){ return a >= b; }) ) // a is of first list and b of second -- here a is of v and b of v1
        std::cout << "content of v is >= b.\n";
    else
        std::cout << "the content of V is not always >= that of v1s\n";




   return 0;
}
    