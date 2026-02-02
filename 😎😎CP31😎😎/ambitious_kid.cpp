#include <bits/stdc++.h>
using namespace std;




int main() {
    int n,mini;
    cin>>n;
    vector<int> arr;

    for(int i=0;i<n;i++){
        int val;
        cin>>val;

        if(val<0){
            val=val*(-1);
        }
        arr.push_back(val);

    }
    mini=arr[0];

    for(int i=1;i<n;i++){
        mini=min(mini,arr[i]);

    }
    cout<<mini;

    return 0;

}