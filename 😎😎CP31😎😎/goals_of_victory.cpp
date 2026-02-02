#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int efficiency=0;
   int n;
   cin>>n;
   for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        efficiency+=x;
   }
   cout<<efficiency-(2*efficiency)<<endl;
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