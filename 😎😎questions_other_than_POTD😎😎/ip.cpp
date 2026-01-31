#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
            }
            else ans.push_back(address[i]);

        }
        return ans;
        
    }
};


int main(){
    Solution sol;
    string a="1.1.1.1";
    string ans=sol.defangIPaddr(a);
    cout<<ans;
    return 0;
}