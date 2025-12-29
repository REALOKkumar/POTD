#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> ans;
        for(int i=1;i<height.size();i++){
            if(height[i-1]>threshold) ans.push_back(i);
        }

        return ans;
        
    }
};


int main(){
    vector<int> height={10,1,10,1,10};
    int threshold = 3;
    Solution sol;
    vector<int> ans=sol.stableMountains(height,threshold);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}