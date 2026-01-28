#include <bits/stdc++.h>
using namespace std;


void solve() {
   
    // write your logic here
    int x;

    cin>>x;
    if(x%3==0){
        cout<<"Second"<<endl;

    }
    else{
        cout<<"First"<<endl;
    }
}

int main() {
    

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}