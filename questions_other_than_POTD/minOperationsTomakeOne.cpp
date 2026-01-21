#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums) {

        int op=0;
        for(int i=0;i<nums.size()-2;i++){

            if(nums[i]==0){
                op++;
                for(int j=i;j<i+3;j++){
                    if(nums[j]==0) nums[j]=1;
                    else nums[j]=0;
                }
            }

        }

        // check ones
        

        for(int i:nums){
            
            if(i==1) continue;
            else op=-1;
        }
        return op;
        
    }
};



int main(){
    vector<int> nums={0,1,1,1,0,0};
    Solution sol;
    cout<<sol.minOperations(nums);
    return 0;
}