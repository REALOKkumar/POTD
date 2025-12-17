#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int max_welth=0;
        for( int i=0;i<accounts.size();i++){
            int welth=0;
            for(int j=0;j<accounts[0].size();j++){
                welth+=accounts[i][j];
                
            }
            if(welth>=max_welth) max_welth=welth;

        }



        return max_welth;

        
    }
};


int main(){
    Solution sol;
    vector<vector<int>> acc={{2,8,7},{7,1,3},{1,9,5}} ;
    int ans;

    ans=sol.maximumWealth(acc);

    cout<<ans;

    return 0;

}