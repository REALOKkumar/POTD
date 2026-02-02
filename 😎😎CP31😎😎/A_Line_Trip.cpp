#include <bits/stdc++.h>
using namespace std;


void solve() {
   // write your logic here
   int n,x;
   cin>>n>>x;
   vector<int> fule_pos;

   fule_pos.push_back(0);
    int a;
   for(int i=0;i<n;i++){
        a=0;
        cin>>a;
        fule_pos.push_back(a);
   }

   fule_pos.push_back(a+(x-a)*2);


//    for(int i:fule_pos){
//     cout<<i<<' ';
//    }

    int dist=0;

    for(int i=1;i<fule_pos.size();i++){
        dist=max(dist,(fule_pos[i]-fule_pos[i-1]));
    }
    cout<<dist<<endl;




}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}