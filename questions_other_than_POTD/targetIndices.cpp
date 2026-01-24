#include<bits/stdc++.h>
using namespace std;



    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(),nums.end());

        // nums is sorted now

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }

        return ans;
        
    }


    int main(){
        vector<int> nums={1,2,5,2,3};
        int terget=2;
        vector<int> a=targetIndices(nums,terget);
        
        for(int i:a){
            cout<<i<<" ";    
        }
        return 0;



    }

