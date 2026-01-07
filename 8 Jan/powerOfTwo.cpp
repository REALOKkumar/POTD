#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        int x=1;
        while(x<=n){
            if(x==n) {
                return true;
                break;
            }
            else{
                x=x*2;
            }
            
        }
        return false;
        
        
    }
};

int main(){
    Solution sol;
    cout<<sol.isPowerofTwo(64);
    return 0;
}