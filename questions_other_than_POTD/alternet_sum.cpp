#include<bits/stdc++.h>
using namespace std;




class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                sum+=nums[i];
            }
            else sum-=nums[i];
        }


        return sum;

        
    }
};


int main(){
    int ans;
    vector<int> v={1,3,5,7};
    Solution sol;
    cout<<sol.alternatingSum(v);
    return 0;
}