#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i=m-1;
        int j=n-1;
        int k=m+n-1;

        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
        
            }
            else{
                nums1[k]=nums2[j];
                j--;
               
            }

            k--;
        } 
        return nums1;
    }
};




int main(){
    Solution sol;
    vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    int  m = 3, n = 3;


    vector<int> ans=sol.merge(nums1,m,nums2,n);

    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}