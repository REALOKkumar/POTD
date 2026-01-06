#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target_array;
        for(int i=0;i<nums.size();i++){
            // target_array[index[i]]=nums[i];
            target_array.insert(target_array.begin() + index[i], nums[i]);

        }

        return target_array;


        
    }
};



int main(){
    Solution sol;

    vector<int> nums = {0,1,2,3,4}, index = {0,1,2,2,1};
    vector<int> ans=sol.createTargetArray(nums,index);
    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}