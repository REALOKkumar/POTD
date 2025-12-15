#include <bits/stdc++.h>
using namespace std;




class Solution {
public:
    string reverseVowels(string s) {
        vector<int> index;
        vector<char> vov;
        for(int i=0;i<s.size();i++){
            char e=s[i];
            if(e=='a' || e=='e' || e=='i' || e=='o' || e=='u' || e=='A' || e=='E' || e=='I' || e=='O' || e=='U'){
                index.push_back(i);
                vov.push_back(s[i]);
            }
        } 
        reverse(vov.begin(), vov.end());
        int ptr=0;
        for (int i = 0; i < s.size(); i++) {
            if (ptr < index.size() && i == index[ptr]) {
                s[i] = vov[ptr];
                ptr++;
            }
        }

    
        return s;
        
    }
};

int main(){
    Solution sol;
    string x="Alok_Kumar";
    cout<<sol.reverseVowels(x);

    return 0;
}