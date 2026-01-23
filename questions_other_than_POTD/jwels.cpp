#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        // unordered_map<char,int>  paisa;
        int ans=0;
        // for(char it:jewels){
        //     paisa[it]=0;
        // }
        // for(char it:jewels){
        //     for(char iit:stones){
        //         if(it==iit) ans++;
        //     }
        // }


        for(int i=0;i<jewels.size();i++){
            for(int j=0;j<stones.size();j++){
                if(jewels[i]==stones[j]) ans++;
            }
        }
        return ans;
        
    }
};


int main(){
    Solution sol;
    string g="aA",s = "aAAbbbb";


    cout<<sol.numJewelsInStones(g,s);

    return 0;

}