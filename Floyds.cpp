#include<iostream>
using namespace std;
// int main (){
//     int n;
//     cout<< "Enter the number ";
//     cin>> n;
//     int num = 1;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j-- ){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

int main (){
    int n;
    cout<< "Enter the number ";
    cin>> n;
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j-- ){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}