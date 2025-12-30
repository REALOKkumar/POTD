#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    string truncateSentence(string s, int k) {
        int words=0;
        string ans="";
        for(char i:s){
            if(i==' '){
                words++;
                if(words==k) break;
                else ans.push_back(i);
            }
            else ans.push_back(i);

        }


        return ans;
        
    }
};


int main (){
    int k;
    string s;
    cout<<"sentence :";
    getline(cin, s);
    cout<<"slice ";
    cin>>k;
    Solution sol;
    string ans=sol.truncateSentence(s,k);
    for (char a:ans){
        cout<<a;

    }
    return 0;
}