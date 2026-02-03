#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


    double myPow(double x, int n){
        
        long long bf=n;

        if(bf<0){
            bf=bf*-1;
        }

        double ans=1;

        while(bf>0){
            if(bf%2==1){
                ans*= x;
            }
            bf=bf/2;
            x=x*x;
        }

        if(n<0){
            return 1/ans;
        }

        return ans;
   
    }





int main() {
    double x=2.00000;
    int n=-2;
    cout<<myPow(x,n);
    return 0;
}