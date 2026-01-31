#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

    // first attempt
        // vector<int> freq(100);
        // for(int i=0;i<nums.size();i++){
        //     freq[nums[i]]++;
        // }
        // for(int j:freq){
        //     if(j==2){
        //         return true;
        //     }
        // }





        // return false;


//second attempt
        // for(int i=0;i<nums.size();i++){
        //     int check=nums[i];
        //     for(int j=0;j<nums.size();j++){
        //         if(i==j) continue;
        //         if(nums[i]==nums[j])return true;
        //     }
        // }

        // return false;





//third attempt
        set<int> freq;
        for(int i=0 ; i<nums.size() ; i++){
            if(freq.find(nums[i]) != freq.end()) return true;

            else freq.insert(nums[i]);
        }
        return false;
        
    }
};

int main (){
    Solution sol;

    vector<int> nums={1,1,1,3,3,4,3,2,4,2};
    cout<<sol.containsDuplicate(nums);
    return 0;
}