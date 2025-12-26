#include<bits/stdc++.h>
using namespace std;

int main(){
    int gifts;
    cin>>gifts;
    int i=1;
    bool ans=false;
    if(gifts==0) ans=true;

    while(i<=gifts){
        gifts-=1*(pow(2,(i-1)));
        if(gifts==0){
            // cout<<"Yes";
            ans= true;
            break;
        }
        i++;
    }
    
    if(ans)cout<<"Yes";
    else cout<<"No";

    return 0;

}