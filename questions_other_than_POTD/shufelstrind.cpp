#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        for(int i=0;i<indices.size();i++){

            int term=indices[i];
            for(int j=0;j<indices.size();j++){
                if(indices[j]>indices[i]){
                    swap(indices[j],indices[i]);
                    swap(s[j],s[i]);
                    
                }
                
            }
            
                
        }
     
        return s;
        
    }
};

int main(){
    Solution sol;
    string v,s="codeleet";
    vector<int> nums={4,5,6,7,0,2,1,3};
    v= sol.restoreString( s,nums);

    cout<<v;

    return 0;

}