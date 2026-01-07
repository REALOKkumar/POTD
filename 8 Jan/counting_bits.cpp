#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

int hammingWeight(int n) {
        string bi="";
        int ans=0;
        while(n>0){
            int x=n%2;
            if(x==1) bi.push_back('1');
            else bi.push_back('0');
            n=n/2;
        }
        // cout<<bi;
        for(char v:bi){
            if(v=='1') ans++;
        }


        return ans;
        
    }


    vector<int> countBits(int n) {

        vector<int> final_ans;
        for(int i=0;i<=n;i++){
            final_ans.push_back(hammingWeight(i));
        }
        return final_ans;
        
    }
};



int main(){
    Solution sol;
    vector<int> pp=sol.countBits(5);

    for (int i:pp) cout<<i<<" ";

    return 0;
}