#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> freq;
        for(auto x:s){
            freq[x]++;

        }
        int v=0,c=0;

        for(auto it:freq){
            
            if(it.first=='a'||it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u') { 
                v=max(v,it.second);
            }
            else{
                c=max(c,it.second);

            }
        }
        int ans=c+v;
        return ans;
        
    }
};

int main(){
    string s="successes";
    Solution sol;
    cout<<sol.maxFreqSum(s);
    return 0;

}
