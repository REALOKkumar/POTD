#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    

    int firstBadVersion(int n,int bad) {
        long long mid=0,high=n,low=1,ans=0;
        while (low<=high){
            mid=(high+low)/2;
            if(bad==mid){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }

        }

        return ans;
        
    }
};

int main() {
    Solution sol;
    int n=5,bad=4;
    cout<<sol.firstBadVersion(n,bad);
    
    
    return 0;
}