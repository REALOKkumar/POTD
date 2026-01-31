#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> soll;
        int n=nums.size();
        int i=0,j=n-1,mid=0,ans=-1;
        //first occurence
        while(i<=j){
            mid=i+(j-i)/2;
            if(nums[mid]==target){
                ans=mid;
                j=mid-1;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        
        soll.push_back(ans);


        i=0,j=n-1,mid=0,ans=-1;




         //second occurence
        while(i<=j){
            mid=i+(j-i)/2;
            if(nums[mid]==target){
                ans=mid;
                i=mid+1;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        soll.push_back(ans);

        return soll;


                
    }
};

int main() {
    Solution sol;
    vector<int> ans,nums={5,7,7,8,8,10};
    int target=8;
    ans=sol.searchRange(nums,target);

    for(int i:ans){
        cout<<i<<" ";
    }


    return 0;
}