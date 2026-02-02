#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;

    int dot=0,con=0;

    for(char c:s){
        if(c=='.'){
            dot++;
            con++;
            if(con==3){
                cout<<2<<endl;
                return;
            }
        } 
        
        else{
            con=0;
        }
    }

    cout<<dot<<endl;
}





int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}





