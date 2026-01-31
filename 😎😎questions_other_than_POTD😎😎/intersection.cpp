#include<bits/stdc++.h>
using namespace std;




class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans;
        vector<int> final;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans.insert(nums1[i]);
                    break;
                }
            }
        }

        for(int i:ans){
            final.push_back(i);
        }

        return final;
        
    }
};



int main(){

    vector<int> ans, nums1={1,2,2,1},nums2={2,2};
    Solution sol;

    ans=sol.intersection(nums1,nums2);

    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}