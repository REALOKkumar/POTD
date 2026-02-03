#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int a,k,x;
    cin>>a>>k>>x;

    if(a>k){
        cout<<"First"<<endl;
    }
    if(k>a){
        cout<<"Second"<<endl;
    }
    if(a==k){
        if(x%2==0){
            cout<< "Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }

    }
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