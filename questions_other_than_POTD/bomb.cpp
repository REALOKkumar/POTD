#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans;

        if(k == 0){
            for(int i=0;i<n;i++) ans.push_back(0);
        }
        else if(k > 0){
            for(int i=0;i<n;i++){
                int sum = 0;
                for(int index = i+1; index < i+1+k; index++){
                    sum += code[index % n];
                }
                ans.push_back(sum);
            }
        }
        else {
            for(int i=0;i<n;i++){
                int sum = 0;
                for(int index = i-1; index > i-1+k; index--){
                    sum += code[(index + n) % n];
                }
                ans.push_back(sum);
            }
        }

        return ans;
    }
};



int main(){
    Solution sol;
    vector<int> code={5,7,1,4};
    int k=3;

    vector<int> ans=sol.decrypt(code,k);
    for(int i:ans){
        cout<<i<<" "; 
    }
}