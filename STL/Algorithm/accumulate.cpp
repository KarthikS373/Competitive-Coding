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
    
    //! accumulate
    //#include <numeric>
    //  TYPE accumulate( iterator start, iterator end, TYPE val );
    //  TYPE accumulate( iterator start, iterator end, TYPE val, BinaryFunction f );
    // TODO RETURN VALUE : The result of accumulating init and all the elements in the range [first,last).
    //* The accummulate() function computes the sum of val and all of the elements in the range [start,end).
    //* If the binary function f if specified, it is used instead of the + operator to perform the summation
    /*
        template <class InputIterator, class T>
        T accumulate(InputIterator first, InputIterator last, T init)
        {
            while (first != last)
            {
                init = init + *first; // or: init=binary_op(init,*first) for the binary_op version
                ++first;
            }
            return init;
        }
    */
    cout << "Accumulate : " << accumulate(all(v), 0) << endl;
    cout << "Accumulate - minus : " << accumulate(all(v), 0, std::minus<int>()) << endl;
    cout << "Accumulate - multiply : " << accumulate(all(v), 0, std::multiplies<int>()) << endl;
    cout << "Accumulate - custom : " << accumulate(all(v), 0, [](int &a, const int &b){ return a + b; })<< endl;

   return 0;
}
    