/*
* Subsequence: A contigous or non contigous sequence which follows seqence.
    e.g [1,2,3]
        subsequences will be:
        [1],[2],[3],[1,2],[1,3],[2,3],[1,2,3];
*/

#include <bits/stdc++.h>
using namespace std;

//* Print all subequences

//* Time: ~O(n*2^n)
//* Space: O(n)

void subSequence(int n, vector<int> arr, vector<int> empty){
    if(n>=arr.size()){
        for(auto it:empty){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    subSequence(n+1,arr,empty); //* -->Not take
    empty.push_back(arr[n]);
    subSequence(n+1, arr, empty); //* -->Take
    empty.pop_back();
}

int main(){
    vector<int> arr{1,2,3};
    vector<int>empty;
    subSequence(0,arr,empty);
    return 0;
}