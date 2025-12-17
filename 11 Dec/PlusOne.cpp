#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int size = digits.size();

        for(int i = size - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;     
                return digits;
            }
            digits[i] = 0;        
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};


int main(){
    vector<int> ans;
    vector<int> digits={4,3,2,1};
    
    Solution sol;
    ans=sol.plusOne(digits);
    for(int i:ans){
        cout<<i<<" ";

    }
    return 0;
}