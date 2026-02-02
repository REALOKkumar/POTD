#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int temp,n;
   cin>>n;
   vector<int> arr,b,c;
   

   for(int i=0;i<n;i++){
    cin>>temp;
    arr.push_back(temp);
    }

    int maximum= *max_element(arr.begin(),arr.end());

    for(int x : arr) {
        if(x == maximum) c.push_back(x);
        else b.push_back(x);
    }

    if(b.size()==0  ){
        cout<<-1<<endl;
        return;
        
    }
    else{
        
    cout<<b.size()<<" "<<c.size()<<endl;

    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i:c){
        cout<<i<<" ";
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