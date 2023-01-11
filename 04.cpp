#include <bits/stdc++.h>
using namespace std;

//* Reverse an array

// void reverse(int i, int j, int arr[]){
//     if(i>j) return;
//     swap(arr[i], arr[j]);
//     reverse(i+1, j-1, arr);
// }


//* Check if given string is pallindrome

bool isPallindrome(string s, int i, int j){
    if(s[i]!=s[j]) return false;
    if(i>j)return true;
    return isPallindrome(s,i+1,j-1);
}

int main(){
    // int arr[]={1,2,3,4,5,6};
    // int i=0;
    // int j=(sizeof(arr)/sizeof(arr[0]))-1;
    // reverse(i,j,arr);
    // for(auto it:arr){
    //     cout<<it<<" ";
    // }

    string s;
    cin>>s;
    cout<<isPallindrome(s,0,s.length()-1)<<endl;
    return 0;
}