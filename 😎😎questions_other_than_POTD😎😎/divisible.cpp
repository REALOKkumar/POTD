#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int differenceOfSums(int n, int m) {
        int x=0,y=0;
        for(int i=1;i<=n;i++){
            if(i%m!=0) x+=i;
            else y+=i;
        }
        return x-y;
    }
};


int main(){
    int m=3,n=10;

    Solution sol;
    cout<<sol.differenceOfSums(n,m);
    return 0;
}