#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n*2);
        for(int i=0;i<n;i++){
            ans[i]=nums[i];
            ans[n+i]=nums[i];
            
        }
        
        return ans;
    }
};


int main(){
    vector<int> nums;
    nums={1,2,3,1};
    Solution sol;
    vector<int> result=sol.getConcatenation(nums);

    for(int i:result){
        cout<<i<<" ";
    }

}