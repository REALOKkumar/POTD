#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans_nums;
        for(int i=0;i<nums.size();i++){
            ans_nums.push_back(nums[nums[i]]);
        }

        return ans_nums;

        
    }

};

int main() {
    Solution sol;
    vector<int> nums = {0, 2, 1, 3};


    vector<int> result = sol.buildArray(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}