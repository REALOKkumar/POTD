#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans ;
        for(int i:nums){
            int hi=0;
            for(int j:nums){
                if(i==j)continue;
                else{
                    if(j<i) hi++;
                }
            }
            ans.push_back(hi);
        }


        return ans;
        
    }
};


int main(){
    vector<int> nums={8,1,2,2,3};
    Solution sol;
    vector<int> ans=sol.smallerNumbersThanCurrent(nums);
    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}

