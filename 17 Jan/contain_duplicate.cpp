#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(i==j) continue;
        //         if(nums[i]==nums[j]  && abs(i-j)<=k){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            for (int j = i + 1; j < n && j <= i + k; j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};


int main(){
    vector<int> nums={1,2,3,1,2,3};
    int k=2;
    Solution sol;
    cout<<sol.containsNearbyDuplicate(nums,k);
    return 0;
}