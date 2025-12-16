

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int word=0;
        int max_word=0;
        for(string i:sentences){
            for(int j=0;j<i.size();j++){
                if(i[j]==' '){
                    word++;
                }
                else continue;

            }
            if(word>max_word){
                max_word=word;
            }
            word=0;

        }
        return max_word+1;
    }
};


int main(){
    Solution sol;
    vector<string> a={"alice and bob love leetcode", "i think so too", "this is great thanks very much","please wait", "continue to fight", "continue to win"};
    cout<<sol.mostWordsFound(a);

    return 0;

}