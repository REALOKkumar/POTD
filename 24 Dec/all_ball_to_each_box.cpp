#include<bits/stdc++.h>
using namespace std;




class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        vector<int> answer;
        for (int i=0;i<boxes.size();i++){
            int operations=0;
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]=='0') continue;
                
                else {
                    
                    operations+=abs(i - j);
                }

            }
            answer.push_back(operations);
        }


        return answer;
        
    }
};


int main(){
    string b="001011";
    vector<int> ans ;
    Solution sol;
    ans= sol.minOperations(b);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}