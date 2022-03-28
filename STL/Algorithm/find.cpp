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

    //! find
    // #include <algorithm>
    // iterator find( iterator start, iterator end, const TYPE& val );
    //TODO RETURN VALUE :Iterator to the first element satisfying the condition or last if no such element is found
    //* The find() algorithm looks for an element matching val between start and end. If an  element matching val is found, the return value is an iterator that points to that element.Otherwise, the return value is an iterator that points to end
    /*
        template<class InputIt, class T>
        constexpr InputIt find(InputIt first, InputIt last, const T& value){
            for (; first != last; ++first) {
                    if (*first == value) {
                        return first;
                    }
                }
            return last;
        }
    */
    vec(v);
    if(find(all(v), 10) == v.end())
        cout<<"NOT FOUND"<<endl;
    else
    cout<<*find(all(v), 10)<<" at index " << find(all(v), 10) - v.begin()<<endl;
    if(find(all(v), 3) == v.end())
        cout<<"NOT FOUND"<<endl;
    else
    cout<<*find(all(v), 3) <<" at index " << find(all(v), 3) - v.begin()<<endl;

   return 0;
}
    