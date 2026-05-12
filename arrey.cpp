#include <iostream>
using namespace std;
int main (){
    int marks[5] = {99, 100, 54, 78, 88};
    marks[0] = 101;
    cout << marks[0] << endl;
    cout << marks[1] << endl;   
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    cout << marks[5] << endl; // This line will cause a compilation error because marks[] is not a valid expression. You cannot print an array directly in C++. You need to loop through the array to print its elements.
    return 0;


}