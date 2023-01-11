#include <bits/stdc++.h>
using namespace std;

//* Printing subsequences whose sum is k

// void subSequence(int n, int k, vector<int> arr, vector<int> empty){
//     if(n>=arr.size()){
//         int sum = 0;
//         for(auto it:empty){
//             sum+=it;
//         }
//         if(sum==k){
//             for(auto it:empty){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//         }
//         return;
//     }
//     subSequence(n+1,k,arr,empty); //* -->Not take
//     empty.push_back(arr[n]);
//     subSequence(n+1,k, arr, empty); //* -->Take
//     empty.pop_back();
// }

//* Printing only one subsequence whose sum is k

// bool subSequence(int n, int k, vector<int> arr, vector<int> empty){
//     if(n>=arr.size()){
//         int sum = 0;
//         for(auto it:empty){
//             sum+=it;
//         }
//         if(sum==k){
//             for(auto it:empty){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//         return true;
//         }
//         else return false;
//     }
//     empty.push_back(arr[n]);
//     if(subSequence(n+1,k, arr, empty)==true)return true; //* -->Take
//     empty.pop_back();
//     if(subSequence(n+1,k,arr,empty)==true)return true; //* -->Not take
//     return false;
// }

//* Give count of subsequences whose sum is k

int subSequence(int n, int k, vector<int> arr,int sum){
    if(n>=arr.size()){
        if(sum==k){
            return 1;
        }
        return 0;
    }
    sum+=arr[n];
    int l = subSequence(n+1,k, arr, sum); //* -->Take
    sum-=arr[n];
    int r = subSequence(n+1,k,arr, sum); //* -->Not take
    return l+r;
}

int main(){
    vector<int> arr{1,2,1};
    cout<<subSequence(0,2,arr,0)<<endl;
    return 0;
}