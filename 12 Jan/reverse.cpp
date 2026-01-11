#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<char> reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0;i<n/2;i++){

            char temp=s[i];
            s[i]=s[n-i-1];
            s[n-i-1]=temp;

        }

        return s;
        
    }
};


int main(){
    Solution sol;
    vector<char> ans,s={'h','e','l','l','o'};
    
    ans=sol.reverseString(s);

    for(char i:ans){
        cout<<i<<" " ;
       }
       
       return 0;


}