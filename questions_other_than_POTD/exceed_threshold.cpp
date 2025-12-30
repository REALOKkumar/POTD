#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int op=0;
        for (int i:nums){
            if(i<k) op++;
        }
        return op;
        
    }
};

int main(){
    int k=10;
    vector<int> nums={2,11,10,1,3};
    Solution sol;
    cout<<sol.minOperations(nums,k);
    return 0;
}