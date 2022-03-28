#include<bits/stdc++.h>
// #include <vector>
using namespace std;

int n = 4, m = 10;
int arr[] = {1, 3, 93, 20, 12, 7, 8};

int main(){
    system("cls");

    //~ Member functions:
    //! constructors
    //? Constructs a vector, initializing its contents depending on the constructor version used

    // &  empty container constructor (default constructor) - - Constructs an empty container, with no elements.
    vector<int> first;                                               // empty vector of ints
    // & fill constructor - -  Constructs a container with n elements. Each element is a copy of val
    vector<int> second (n, m);                                       // n int spaces filled with value m
    vector<int> second_n (n);                                        // n int spaces
    //  & range constructor - - Constructs a container with as many elements as the range [first,last), with each element emplace-constructed from its corresponding element in that range, in the same order
    vector<int> third (second.begin(),second.end());                 // iterating through second
    // &  copy constructor (and copying with allocator) - - Constructs a container with a copy of each of the elements in x, in the same order.
    vector<int> fourth (third);                                      // a copy of third
    //  & move constructor (and moving with allocator) - - Constructs a container that acquires the elements of Another vector object of the same type
    vector<int> fifth (arr, arr + sizeof(arr) / sizeof(int) );       // copies the array to the vector    


    //! operator
    //? Assigns new contents to the container, replacing its current contents, and modifying its size accordingly.
    /*
        copy (1)	vector& operator= (const vector& x);   --> copies all the elements from x into the container (with x preserving its contents)
        move (2)	vector& operator= (vector&& x);        --> moves the elements of x into the container (x is left in an unspecified but valid state)
    */
    std::vector<int> op1 (3,0);
    std::vector<int> op2 (5,0);
    cout<<op1.size()<<" "<<op2.size()<<endl;   // result : 3 5
    op2 = op1; // copy (1)
    cout<<op1.size()<<" "<<op2.size()<<endl;   // result : 3 3


    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //~Iterators:
    //! begin
    //? Return iterator to beginning 
    vector<int> :: iterator begin = vec.begin();
    int first_ele = *begin;

    //! end
    //? Returns an iterator referring to the past-the-end element in the vector container
    vector<int> :: iterator end = vec.end();
    int last_ele = *(end - 1);
    int val = *end; // element after the last element in vector - might throw error

    //! rbegin
    //? eturns a reverse iterator pointing to the last element in the vector 
    vector<int> :: reverse_iterator rbegin = vec.rbegin();
    int last_ele = *rbegin;

    
    return 0;
}