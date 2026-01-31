#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans,freq(nums.size()+1,0);

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        for(int i=0;i<freq.size();i++){
            if(freq[i]==2) ans.push_back(i);
        }


        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> v,nums={4,3,2,7,8,2,3,1};
    v= sol.findDuplicates(nums);

    for(int i:v){
        cout<<i<<" ";
    }

    return 0;

}