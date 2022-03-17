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

    //! adjacent_find
    // #include <algorithm>
    // iterator adjacent_find( iterator start, iterator end );
    //  iterator adjacent_find( iterator start, iterator end, BinPred pr );
    // TODO RETURN VALUE : An iterator to the first element of the first pair of matching consecutive elements in the range [first,last), If no such pair is found, the function returns last.
    //* The adjacent_find() function searches between start and end for two consecutive identical elements. If the binary predicate pr is specified, then it is used to test whether two elements are the same or not
    //* The return value is an iterator that points to the first of the two elements that are found. If no matching elements are found, the returned iterator points to end.
    /*
        template <class ForwardIt, class BinaryPredicate>
        ForwardIt adjacent_find(ForwardIt first, ForwardIt last,
            BinaryPredicate p){
            if (first == last){
                return last;
            }
            ForwardIt next = first;
            ++next;
            for (; next != last; ++next, ++first){
                if (p(*first, *next)){
                    return first;
                }
            }
            return last;
        }
    */
    // Matching adjacent elements
    auto it1 = std::adjacent_find(v.begin(), v.end());
    cout<<"CASE 1 - NO Matching elements"<<endl;
    if (it1 == v.end()) {
        std::cout << "No matching adjacent elements\n";
    } else {
        std::cout << "The first adjacent pair of equal elements is at "
                  << std::distance(v.begin(), it1) << ", *it1 = "
                  << *it1 << '\n';
    }
    auto it2 = std::adjacent_find(v1.begin(), v1.end());
    cout<<"CASE 2 - Matching element present"<<endl;
    if (it2 == v1.end()) {
        std::cout << "No matching adjacent elements\n";
    } else {
        std::cout << "The first adjacent pair of equal elements is at "
                  << std::distance(v1.begin(), it2) << ", *it2 = "
                  << *it2 << '\n';
    }
    // Using inbuilt comperator
    cout<<"First Greater"<<endl;
    auto it3 = std::adjacent_find(v.begin(), v.end(), std::greater<int>());
     if (it3 == v.end()) {
        std::cout << "The entire vector is sorted in ascending order\n";
    } else {
        std::cout << "The last element in the non-decreasing subsequence is at "
                  << std::distance(v.begin(), it3) << ", *it3 = " << *it3 << '\n';
    }
    // Using custom
    cout<<"Custom"<<endl;
    auto it4 = std::adjacent_find(v.begin(), v.end(), [](int a, int b){ return a == b;});
    if (it4 == v.end()) {
        std::cout << "The entire vector has no adjacent equal elements\n";
    } else {
        std::cout << "The first adjacent pair of equal elements is at"
                  << std::distance(v.begin(), it4) << ", *it4 = " << *it4 << '\n';
    }



   return 0;
}
    