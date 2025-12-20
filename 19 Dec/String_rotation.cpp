#include<bits/stdc++.h>
using namespace std;




class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        // int ans=0;
        // reverse(s1.begin(),s1.end());
        // for(int i=1;i<s1.size();i++){
        //     reverse(s1.begin()+i,s1.end());
        //     reverse(s1.begin(),s1.end()-s1.size()+i);
        //     if(s1==s2){
        //         ans=1;
        //     }

        // }
        // if(ans == 1) return true;
        // else return false;
        

        string temp =s1+s1;
        if(s1.size() != s2.size()) return false;
        else{
            if(temp.find(s2) != string::npos) return true;
            else return false;
        }
    }
};




int main(){
    string s1="hihelloandthankyou",s2 ="thankyouhihelloand";
    Solution sol;
    if(sol.areRotations(s1,s2)) cout<<"True";
    else cout<<"False";

    return 0;
}