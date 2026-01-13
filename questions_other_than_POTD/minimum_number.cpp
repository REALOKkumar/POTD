#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int s=nums.size();
        vector<int> ans,bob,alice;

        //sort the array
        for(int i=s-1;i>=1;i--){
            int didswap=0;
            for(int j=0;j<i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    didswap=1;
                }
            }
            if(didswap==0)break;
        }
        

        for(int i=0;i<s;i++){
            if(i%2==0) bob.push_back(nums[i]);
            
            else alice.push_back(nums[i]);
        }
        int ptr1=0,ptr2=0;
        for(int i=0;i<s;i++){
            if(i%2==0) {
                ans.push_back(alice[ptr1]);
                ptr1++;
            }
            
            else {
                ans.push_back(bob[ptr2]);
                ptr2++;
            }
        }



        
    




        return ans;

        

        
    }
};




int main(){
    vector<int> ans,nums={5,4,2,3};
    Solution sol;
    
    ans=sol.numberGame(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}