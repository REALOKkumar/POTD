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
};


int main(){
    Solution sol;
    int n=11;
    int ans=sol.hammingWeight(n);
    cout<<ans;
    return 0;
}