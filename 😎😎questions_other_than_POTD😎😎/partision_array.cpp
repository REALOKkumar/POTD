#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans,pre,mid,post;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                pre.push_back(nums[i]);
            }
            else if ( nums[i]>pivot){
                post.push_back(nums[i]);
            }
            else{
                mid.push_back(nums[i]);
            }
        }


        // integrating pre +mid +post


        for(int i:pre){
            ans.push_back(i);
        }
        for(int i:mid){
            ans.push_back(i);
        }
        for(int i:post){
            ans.push_back(i);
        }

    return ans;
        
    }
};


int main(){
    Solution sol;
    vector<int> nums={9,12,5,10,14,3,10};
    int pivot=10;
    vector<int> anss=sol.pivotArray(nums,pivot);
    for(int i:anss){
        cout<<i<<" ";
    }
}