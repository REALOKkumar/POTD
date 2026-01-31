#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even=0,odd=0;
        vector<int> ans;
        for(int i:nums){
            if(i%2==0) even++;
            else odd++;
        }
        for(int i=0;i<even;i++){
            ans.push_back(0);
        }
        for(int i=0;i<odd;i++){
            ans.push_back(1);
        }

        return ans;
        
    }
};

// time complexity O(n)












// this is a short code but time complexity is more 

// class Solution {
// public:
//     vector<int> transformArray(vector<int>& nums) {
//         // int even=0,odd=0;
//         vector<int> ans;
//         for(int i:nums){
//             if(i%2==0) ans.push_back(0);
//             else ans.push_back(1);
            
//         }
//         sort(ans.begin(),ans.end());
        
//         return ans;
        
//     }
// };


int main(){
    Solution sol;
    vector<int> s={1,5,1,4,2};

    vector<int> ans =sol.transformArray(s);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}



