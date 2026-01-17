#include<bits/stdc++.h>
using namespace std;


class Solution {
public:


    int maxDepth(string s) {

        stack<int> st;
        int si=0;
        for(int i=0;i<s.size();i++){

            if(s[i]=='('){
                st.push(1);
            }
            if(s[i]==')'){
                st.pop();
            }
            // si=max(si,st.size());
            if(st.size()>si){
                si=st.size();
            }

        }
        return si;      
    }
};



int main(){
    string s="(1+(2*3)+((8)/4))+1";
    Solution sol;

    cout<<sol.maxDepth(s);
    return 0;
}