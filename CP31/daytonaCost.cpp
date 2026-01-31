#include <bits/stdc++.h>
using namespace std;

void solve() {
   
    int n,f,x;
    string ans="NO";
    cin>>n;
    cin>>f;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==f){
            ans ="YES";
            
        }
        
    }
    cout<<ans<<endl;
    return;
}

int main() {
    

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}