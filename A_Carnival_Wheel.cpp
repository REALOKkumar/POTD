#include <bits/stdc++.h>
using namespace std;


int solve() {
   int l,a,b,mmax=0,boss=0;
   cin>>l>>a>>b;   //    8   2   4 


   while(mmax!=a){
    mmax=(a+b)%l;
    boss=max(mmax,boss);
   }

   return boss;
}

int main() {
    int x=0;
    cin >>x;
    for(int i=0;i<x;i++){
        cout<<solve();
    }
    return 0;

}





#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n,t;
    cin>>n>>t;
   // write your logic here
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