#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void ans(int n, int k, vector<int> &arr, vector<int>&empty){
        if(k==0){
            for(auto it:empty){
                cout<<it<<" ";
            }
            cout<<endl;
            return;
        }
        for(int i=n;i<arr.size();i++){
            if(i>n && arr[i]==arr[i-1])continue;
            if(arr[i]>k)break;
            empty.push_back(arr[i]);
            ans(i+1,k-arr[i],arr,empty);
            empty.pop_back();
        }
    }

    void combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> empty;
        ans(0,target,candidates,empty);
        return;
    }
};

int main(){
    Solution s;
    vector<int> arr {1,1,1,2,2};
    int target = 4;
    s.combinationSum2(arr,target);
    return 0;
}