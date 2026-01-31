#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int check_min(const vector<int>& nums) {
    int ind = 0;            
    int m = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < m) {
            m = nums[i];
            ind = i;
        }
    }
    return ind;
}

    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int c=check_min(nums);
            nums[c]=nums[c]*multiplier;
        }

        return nums;
        
    }
};





int main(){
    cout << "Program started\n";

    vector<int> nums={2,1,3,5,6};
    int multiplier = 2,k=5;

    Solution sol;
    

    vector<int> ans=sol.getFinalState(nums,k,multiplier);
    
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;


}

