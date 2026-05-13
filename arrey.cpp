#include <iostream>
using namespace std;
// int main (){
    // int marks[5] = {99, 100, 54, 78, 88};
    // marks[0] = 101;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;   
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // cout << marks[5] << endl;
    //  return 0;
    // }


    //user input 

    // int size = 5;
    // int marks[size];

    // for(int i=0; i<size; i++){
    //     cin>> marks[i];
    // }

    // for (int i=0; i<size; i++){
    //     cout<< marks[i] <<endl;
    // }
//     return 0;
// }


// print smallest number in array


//     int nums[] = {5, 6, 43, 66, -15, -25};
//     int size = 6; 
//     int smallest = nums[0];
//     int largest = nums[0];
//     for (int i=0; i<size; i++){
//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
//     }
//     cout << "The smallest number is: " << smallest << endl;
//     cout<< "The largest number is: " << largest << endl;
//     return 0;
// }


// Linear search


// int linearSearch(int arr[], int sz, int target){
//     for (int i=0; i<sz; i++){
//         if (arr[i] == target){ // Found 
//             return i; 
//         }
//     }
//     return -1; //Not found 
// }

// int main(){ 
//     int arr[] = {4, 5, 2, 94, 6, 35, 33};
//     int sz = 7;
//     int target = 6;
//     int result = linearSearch(arr, sz, target);
//     cout << "Index of target element: " << result << endl;
//     return 0;
// }


// Reverse na array

// void reverseArray(int arr[], int sz){
//     int start = 0, end = sz-1;

//     while (start < end){
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
//  }
// }
// int main(){
//     int arr[] ={8, 1, 2, 5 };
//     int sz =4;
//     reverseArray(arr, sz);

//     for(int i=0; i<sz; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


//Find the sum and product of all the element in array


void sumAndProduct(int arr[], int size){
    int sum = 0;
    int product = 1;
    for (int i=0; i<size; i++){
        sum = sum + arr[i];
        product = product * arr[i];
    }
    cout << "sum: " << sum << endl;
    cout << "product: " << product << endl;

}
int main(){
    int arr[] ={1, 2, 3, 4, 5};
    int size = 5;
    sumAndProduct(arr, size);
    return 0;
}

