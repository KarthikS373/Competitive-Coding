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

    //! find_first_of
    // #include <algorithm>
    // iterator find_first_of( iterator start, iterator end, iterator seq_start, iterator seq_end );
    // iterator find_first_of( iterator start, iterator end, iterator seq_start, iterator seq_end, BinPred bp );
    //TODO RETURN VALUE :Iterator to the beginning of first occurrence of the sequence [seq_start, seq_end) in range [start, end). If no such sequence is found, last is returned.
    //* The find_first_of() function searches for the first occurence of any element between find_start and find_end. The data that are searched are those between start and end. If any element between find_start and find_end is found, an iterator pointing to that element is returned. Otherwise, an iterator pointing to end is returned
    /*
        template<class ForwardIt1, class ForwardIt2>
        ForwardIt1 find_first_of(ForwardIt1 first, ForwardIt1 last,
            ForwardIt2 s_first, ForwardIt2 s_last){
                if (s_first == s_last)
                    return last;
                ForwardIt1 result = last;
                while (true) {
                    ForwardIt1 new_result = std::search(first, last, s_first, s_last);
                    if (new_result == last) {
                        break;
                    } else {
                        result = new_result;
                        first = result;
                        ++first;
                    }
                }
            return result;
        }
    */
    vector<int> subs = {5, 6};
    vec(v);
    if(find_first_of(all(v), all(subs)) == v.end())
        cout<<"NOT FOUND"<<endl;
    else 
        cout<<*find_first_of(all(v), all(subs))<<" at index " << find_first_of(all(v), all(subs)) - v.begin()<<endl;
    // vec(v1);
    // if(find_first_of(all(v1), all(subs)) == v1.end())
    //     cout<<"NOT FOUND"<<endl;
    // else 
    //     cout<<*find_first_of(all(v1), all(subs))<<" at index " << find_first_of(all(v1), all(subs)) - v1.begin()<<endl;
    // vec(v2);
    // if(find_first_of(all(v2), all(subs)) == v2.end())
    //     cout<<"NOT FOUND"<<endl;
    // else 
    //     cout<<*find_first_of(all(v2), all(subs))<<" at index " << find_first_of(all(v2), all(subs)) - v2.begin()<<endl;

    // CUSTOM
    auto itr = find_first_of(all(v), all(subs), [](int a, int b){ cout<<a<<" "<<b<<endl; return a > b; }); // a is from v and b from seq
    if(itr == v.end())
        cout<<"NOT FOUND"<<endl;
    else 
        cout<<*itr<<" at index " << itr - v.begin()<<endl;

        

   return 0;
}
    