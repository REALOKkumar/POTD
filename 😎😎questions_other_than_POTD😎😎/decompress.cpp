#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i+=2){
            for(int j=0;j<nums[i];j++){
                ans.push_back(nums[i+1]);
            }
        }

        return ans;
        
    }
};




int main(){
    Solution sol ;
    vector<int> ans,nums={1,1,2,3};
    ans=sol.decompressRLElist(nums);


    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}