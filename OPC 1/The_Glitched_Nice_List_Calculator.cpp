#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int n = max(a.size(), b.size());



    a= string(n-a.size(),'0') + a;

    b =string(n-b.size(),'0')+ b;

    string res="";

    
    for(int i=0;i<n;i++) {

        int x=a[i]-'0';
        int y=b[i]-'0';
        
        res +=to_string(x+y);   
    }

    cout << res;
}
