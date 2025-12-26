#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ptr=0;
        int temp;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                ptr++;
            }

        }

        




        
        int start=0,end=nums.size()-1;
        if(nums.size()==0)start=end;

        
        while(true){
            if(start==end) break;
            else if(nums[start]==val){
                // swap with last
                temp=nums[start];
                nums[start]=nums[end];
                nums[end]=temp;
                end--;
            }
            else if(nums[start]!=val){
                start++;
            }
            
        }









        return ptr;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {3,2,2,3,5,6,7};
    int val = 3;
    int newLength = sol.removeElement(nums, val);
    cout << "New length: " << newLength << endl;    
    return 0;
}