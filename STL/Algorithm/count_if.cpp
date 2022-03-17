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

    //! count_if
    // #include <algorithm>
    // size_t count_if( iterator start, iterator end, UnaryPred p );
    //TODO RETURN VALUE : The number of elements in the range [first,last) for which pred does not return false.
    //TODO                The return type (iterator_traits<InputIterator>::difference_type) is a signed integral type.
    //* The count_if() function returns the number of elements between start and end for which the predicate p returns true
    /*
        template <class InputIterator, class UnaryPredicate>
        typename iterator_traits<InputIterator>::difference_type
            count_if (InputIterator first, InputIterator last, UnaryPredicate pred)
        {
        typename iterator_traits<InputIterator>::difference_type ret = 0;
        while (first!=last) {
            if (pred(*first)) ++ret;
            ++first;
        }
        return ret;
        }
    */
    std::cout << "V contains " << count_if(all(v), [](int x){ return (x%2) == 0;}) << " even values.\n";
    std::cout << "V contains " << count_if(all(v), [](int x){ return (x%2) != 0;}) << " odd values.\n";

   return 0;
}
    