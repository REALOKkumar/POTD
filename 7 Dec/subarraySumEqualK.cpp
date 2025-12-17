#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;  
        
        mp[0] = 1; 
        
        int sum = 0;   
        int ans = 0;   
        
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];  
            
            int need = sum - k;   
            
            if(mp.find(need) != mp.end()){
                ans = ans + mp[need];  
            }
            mp[sum]++; 
        }
        
        return ans;
    }
};


int main(){
    Solution sol;
    vector<int> nums={1,2,3};
    int k=3;
    int ans=sol.subarraySum(nums,k);

    cout<<ans;
}
