#include<bits/stdc++.h>
using namespace std;



// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> answer(nums.size());     
//         for (int i=0;i<nums.size();i++){
//             int product=1;
//             for(int j=0;j<nums.size();j++){
//                 if (i==j) continue;
//                 else{
//                     product=product*nums[j];
//                 }
//             }
//             answer[i]=product;
//         }
//         return answer;        
//     }
// };



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);

        // for left product
        for (int i=1;i<n;i++) {
            answer[i] =answer[i-1] *nums[i-1];
        }




        //Right product
        int product = 1;
        for(int i=n-1;i>=0;i--){
            answer[i]*=product;
            product*=nums[i];
        }

        return answer;
    }
};




int main(){
    vector<int> ans;
    vector<int> nums={1,2,3,4};
    Solution sol;
    ans=sol.productExceptSelf(nums);
    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;


}
