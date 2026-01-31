#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int previous_num=nums[0];


        for(int i=1;i<nums.size();i++){
            if(nums[i]==previous_num){
                ans.push_back(nums[i]);
            }
            previous_num=nums[i];


        }

        return ans;
        
    }
};




int main(){
    vector<int> nums={7,1,5,4,3,4,6,0,9,5,8,2};
    Solution sol;
    vector<int> ans =sol.getSneakyNumbers(nums);
    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;


}