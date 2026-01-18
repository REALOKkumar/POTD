#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxDistinct(string s) {
        vector<int> freq(26);
        int ans=0;
        for(int i=0;i<s.size();i++){
            int x=s[i];
            freq[x-97]++;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]>0) ans++;
        } 

        return ans;     
    }
};



int main(){
    Solution sol;
    string s="abab";
    cout<<sol.maxDistinct(s);
    return 0;
}