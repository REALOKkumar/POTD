#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
    string ans;
    int depth = 0;

    for(char c : s){
        if(c == '('){
            
            if(depth > 0) ans += c;
            depth++;
        }
        
        
        
        else{

            depth--;
            if(depth > 0) ans += c;
        }
    }
    return ans;
}

};


int main (){
    Solution sol;
    string s="(()())(())(()(()))";
    string ans = sol.removeOuterParentheses(s);
    cout<< ans;
    return 0;

}