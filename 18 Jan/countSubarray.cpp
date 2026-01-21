#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sub = 0;
        int left = 0;
        long long sub_count = 0;

        for(int right=0;right<nums.size();right++){
            sub+=nums[right];
            while(sub * (right-left+1)>=k ){
                sub=sub-nums[left];
                left++;
            }

            
            sub_count += (right - left + 1);
        }
        return sub_count;
        
    }
};


int main(){
    Solution sol;
    vector<int> nums={2,1,4,3,5};
    long long k=10;

    cout<<sol.countSubarrays(nums,k);

}