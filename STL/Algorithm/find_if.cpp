#include <bits/stdc++.h>
using namespace std;

// Test Vector
#define all(vec) vec.begin(), vec.end()
vector<int> v = {3, 6, 5, 6, 4, 9, 23, -23, 2, 5, 6, -11, 344, 0, 5, 6, 455, 3, 5, 6, 7, 3, 8, -6, 8, 3, 5, 6, 89, 90};
vector<int> v1 = {3, 6, 4, 9, 5, 6, 23, -23, 2, -11, 344, 0, 455, 3, 3, 4, 5, 6, 7, 3, 8, -6, 8, 3, 89, 90};
vector<int> v2 = {3, 6, 4, 9, 23, -23, 2, -11, 344, 0, 455, 3, 3, 4, 7, 3, 8, -6, 8, 3, 89, 90};
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

    //! find_if
    // #include <algorithm>
    // iterator find_if( iterator start, iterator end, UnPred up );

    //TODO RETURN VALUE :Iterator to the beginning of first occurrence of the sequence [seq_start, seq_end) in range [start, end). If no such sequence is found, last is returned.
    //* The find_if() function searches for the first element between start and end for which the unary predicate up returns true. If such an element is found, an iterator pointing to that element is returned. Otherwise, an iterator pointing to end is returned.
    /*
        template<class InputIterator, class UnaryPredicate>
        InputIterator find_if (InputIterator first, InputIterator last, UnaryPredicate pred){
            while (first!=last) {
                if (pred(*first)) return first;
                ++first;
            }
            return last;
        }
    */
    vector<int> subs = {5, 6};
    vec(v);
    auto itr = std::find_if (all(v), [](int a){ return !(a&1); }); // first Even
    if(itr == v.end())
        cout<<"NOT FOUND"<<endl;
    else 
        cout<<*itr<<" at index " << itr - v.begin()<<endl;

        

   return 0;
}
    