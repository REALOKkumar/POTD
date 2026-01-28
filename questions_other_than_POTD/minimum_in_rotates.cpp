#include<bits/stdc++.h>
using namespace std;

    class Solution {
    public:
        int findMin(vector<int>& nums) {
            int n=nums.size();
            int i=0,j=n-1;

            while(i<j){        
                int mid=i+(j-i)/2;

                if(nums[mid]>nums[j]) {    
                    i=mid+1;
                } else {
                    j=mid;
                }
            }
            return nums[i];                  
        }
    };



    int main(){
        Solution sol;
        
        vector<int> nums={4,5,6,7,0,1,2};
        cout<<sol.findMin(nums)<<" is the minimum element";
        return 0;

    }