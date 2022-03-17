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


    //!! equal_range
    //     #include <algorithm>
    //  pair<iterator,iterator> equal_range( iterator first, iterator last, const TYPE& val );
    //  pair<iterator,iterator> equal_range( iterator first, iterator last,const TYPE& val, CompFn comp );
    //TODO RETURN VALUE : A pair object, whose member pair::first is an iterator to the lower bound of the subrange of equivalent values, and pair::second its upper bound.
    //* The equal_range() function returns the range of elements between first and last that are equal to val. This function assumes that the elements between first and last are in order according to comp, if it is specified, or the < operator otherwise.
    //* equal_range() can be thought of as a combination of the lower_bound() and `upper_bound1`() functions, since the first of the pair of iterators that it returns is what lower_bound() returns and the second iterator in the pair is what `upper_bound1`() returns
    /*
        template <class ForwardIterator, class T>
        pair<ForwardIterator,ForwardIterator>
            equal_range (ForwardIterator first, ForwardIterator last, const T& val){
            ForwardIterator it = std::lower_bound (first,last,val);
            return std::make_pair ( it, std::upper_bound(it,last,val) );
        }
    */
    pair<std::vector<int>::iterator,std::vector<int>::iterator> obj;
    std::sort (v.begin(), v.end()); 
    obj = std::equal_range (v.begin(), v.end(), 3);
    vec(v);
    cout<<obj.first[0]<<" "<<obj.second[0]<<endl;
    cout<<obj.first[1]<<" "<<obj.second[1]<<endl;
    cout<<obj.first[2]<<" "<<obj.second[2]<<endl;
    cout<<obj.first[3]<<" "<<obj.second[3]<<endl;
    cout<<obj.first[4]<<" "<<obj.second[4]<<endl;
    cout<<obj.first[5]<<" "<<obj.second[5]<<endl;
    // TO GET INDEX
    cout<<obj.first - v.begin()<<endl;
    // obj.first return starting pointer and v.second give pointer to upper bound element



   return 0;
}
    