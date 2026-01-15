#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp=k;

        int s=nums.size();
        vector<int> ans(s);
        for(int i=0;i<s;i++){
            if(temp>s){
                temp=temp%s;
            }
            int new_index = (i + temp) % s;
            ans[new_index] = nums[i];
        }


        for(int j=0;j<s;j++){
            nums[j]=ans[j];
        }

        
    }
};

int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    int k = 3;
    for(int i:nums){
        cout<<i<<" ";
        
    }
    cout<<endl;

    Solution sol;
    sol.rotate(nums,k);

    for(int i:nums){
        cout<<i<<" ";

    }


    
}



