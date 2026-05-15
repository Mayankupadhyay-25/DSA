// Vector Functions
// 1 Size
// 2 push_back = uses=> vec.push_back(value)
// 3 pop_back => last value is removed
// 4 front => first element of the value is printed
// 5 back => last value is print 
// 6 at => access elements safely.


//Static vs Dynamic Allocation 

// static memory resolve/allocate at compile time and dynamic memory resolve at runtime.
// satic memory allocated on stack and dynamic memory allocated on heap.

#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0; 
}