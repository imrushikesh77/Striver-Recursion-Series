#include <bits/stdc++.h>
using namespace std;

//* Sum 1 to N;

//* Parameterized
// void sumN(int n, int sum){
//     if(n<1){
//         cout<<sum<<endl;
//         return;
//     }
//     sumN(n-1, sum+n);
// }

//* Functional

// int sumN(int n){
//     if(n<1)return 0;
//     return n+sumN(n-1);
// }

//*Factorial
int fact(int n){
    if(n<=1)return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // sumN(n ,0);
    // cout<<sumN(n)<<endl;
    cout<<fact(n)<<endl;
    return 0;
}