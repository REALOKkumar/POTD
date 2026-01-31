#include<iostream>
using namespace std;
#include<vector>



class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operation=0,i=0;; 
        while(i<nums.size()){
            if(nums[i]%3==2){
                operation+=1;
                
            }
            else if(nums[i]%3==1){
                operation+=1;
            }
            i++;
        }

        return operation;
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 2, 1, 3};


    int result = sol.minimumOperations(nums);

    return result;
}