#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int mySqrt(int x) {
        long long ans=0;
        if (x==1) return 1;
        for(long long i=0;i<=x/2;i++){
            if(i*i<=x) ans=i;
            else break;

        }
        return ans;
        
    }
};


int main(){
    Solution sol;
    cout<<sol.mySqrt(8);
    return 0;
}