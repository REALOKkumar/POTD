#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   // write your logic here
   string a,b;
   cin>>a;
   cin>>b;
   int aptr=0,bptr=0;
   while(bptr<=b.size()-1){
        if(b[bptr]==a[aptr]){
            aptr++;
            bptr++;

        }
        else{
            bptr++;
        }
   }
   if(aptr==a.size()){
    cout<<"YES"<<endl;
   }
   else {
    cout<<"NO"<<endl;
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