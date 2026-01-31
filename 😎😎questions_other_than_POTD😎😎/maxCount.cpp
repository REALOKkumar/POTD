#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0,pos=0;
        for(int i:nums){
            if(i<0) neg++;
            else if(i>0) pos++;
        }
        return max(neg,pos);
        
    }
};


int main(){
    Solution sol;
    vector<int> nums={-2,-1,-1,1,2,3};

    cout<<sol.maximumCount(nums);
    return 0;
}