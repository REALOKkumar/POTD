#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        int ans=0;
        
        for(int i:arr) ans=ans^i;
        
        
        int mask= ans & (-ans);
        
        int a=0,b=0;
        for (int i:arr){
            if(i & mask) a=a^i;
            else b=b^i;
        }
        if(a>b) swap(a,b);
        
        return {a,b};
    }
        
};


int main(){
    Solution sol;
    vector<int> ans, arr = {1, 2, 3, 2, 1, 4};
    ans=sol.singleNum(arr);
    for(int i:ans){
        cout<< i<< " ";
    }

    return 0;


}