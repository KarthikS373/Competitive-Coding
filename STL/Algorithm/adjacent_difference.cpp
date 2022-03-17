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
    
    //! adjacent_difference
    // #include <numeric>
    //  iterator adjacent_difference( iterator start, iterator end, iterator result );
    //  iterator adjacent_difference( iterator start, iterator end, iterator result, BinaryFunction f );
    // TODO RETURN VALUE : An iterator pointing to past the last element of the destination sequence where resulting elements have been stored.
    //* The adjacent_difference() function calculates the differences between adjacent elements in the range [start,end) and stores the result starting at result.
    //* If a binary function f is given, it is used instead of the - operator to compute the differences.
    /*
        template <class InputIt, class OutputIt, class BinaryOperation>
        constexpr // since C++20
            OutputIt
            adjacent_difference(InputIt first, InputIt last,
                OutputIt d_first, BinaryOperation op){
            if (first == last)
            return d_first;

            typedef typename std::iterator_traits<InputIt>::value_type value_t;
            value_t acc = *first;
            *d_first = acc;
            while (++first != last){
                value_t val = *first;
                *++d_first = op(val, std::move(acc)); // std::move since C++20
                acc = std::move(val);
            }
            return ++d_first;
        }
    */
    // std::adjacent_difference(v.begin(), v.end(), v.begin());
    // cout<<"Adjacent difference : "; vec(v);


   return 0;
}
    