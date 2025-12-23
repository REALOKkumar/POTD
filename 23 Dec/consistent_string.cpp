#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words){//allowed = "ab", words = ["ad","bd","xya","baa"]
        int ans=words.size(),d=0;  
        for(string w:words){
            for(char c:w){
                if(allowed.find(c)==string::npos) {
                    ans--;
                    break;
                }
            }
            
        }

        return ans;

        
    }
};


int main(){
    string allowed= "ab";
    vector<string> words={"ad","bd","aaab","baa","badab"};
    Solution sol;
    cout<<sol.countConsistentStrings(allowed,words);
    return 0; 
}