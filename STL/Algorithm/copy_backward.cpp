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

    //! copy_backward
    // #include <algorithm>
    //  iterator copy_backward( iterator start, iterator end, iterator dest );
    // TODO RETURN VALUE : An iterator to the first element of the destination sequence where elements have been copied.
    //* copy_backward() is similar to (C++ Strings) copy(), in that both functions copy elements from start to end to dest. The copy_backward() function , however, starts depositing elements at dest and then works backwards
    /*
        template <class BidirectionalIterator1, class BidirectionalIterator2>
        BidirectionalIterator2 copy_backward(BidirectionalIterator1 first,
            BidirectionalIterator1 last,
            BidirectionalIterator2 result){
            while (last != first)
                *(--result) = *(--last);
            return result;
        }
    */
     std::copy_backward ( v.begin(), v.end(), res.end() );
     vec(res);

   return 0;
}
    