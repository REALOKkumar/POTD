#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, t;
    cin >>n>>k>>t;

    int all=(n*k*t)/100;

    for(int i=0;i<n;i++){
        if(all>=k){
            cout <<k<<" ";

            all=all-k;
        }
        else if(all>0){
            cout<<all<<" ";
            all=0;
        }
        else{
            cout<<0<<" ";


        }
    }

    return 0;
}
    