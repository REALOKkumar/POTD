#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans="";
        int temp=0;
        stack<char> it;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                temp=1;
                it.push(word[i]);
                break;
            }
            else{
                it.push(word[i]);
            }
        }
        if(temp==0)return word;


        for(int i=0;i<word.size();i++){
            
            
            if(!it.empty()){
                ans.push_back(it.top());
                it.pop();
            }

            else{
                ans.push_back(word[i]);
            }
            
            
        }


        return ans;
        
    }
};


int main(){
    Solution sol;
    string word = "abcdefd";
    char  ch = 'd';

    cout<<sol.reversePrefix(word,ch);
    return 0;
}