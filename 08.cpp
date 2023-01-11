#include <bits/stdc++.h>
using namespace std;

//* Combination sum I --> leetcode

void print(int n, int k, vector<int> arr, vector<int> empty){
    if(n==arr.size()){
        if(k==0){
            for(auto it:empty){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(arr[n]<=k){
        empty.push_back(arr[n]);
        print(n,k-arr[n],arr,empty);
        empty.pop_back();
    }
    print(n+1,k,arr,empty);
}

int main(){
    vector<int> arr{2,3,4,7};
    vector<int> empty;
    print(0,7,arr,empty);
    return 0;
}