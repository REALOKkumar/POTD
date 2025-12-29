

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int l_ptr=0, r_ptr=nums.size()-1;
        int ans=0;



        while (l_ptr<r_ptr){

            if (nums[l_ptr]+nums[r_ptr]<target){
                ans+=(r_ptr-l_ptr);

                l_ptr++;
            } else{
                r_ptr--;
            }
        }
        return ans;
    }
};



int main(){
    vector<int> nums={3,5,7,1,2,0,2,3,5,7};
    int target=7;
    Solution sol;
    cout<<sol.countPairs(nums,target);
}