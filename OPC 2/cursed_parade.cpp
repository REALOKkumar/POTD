#include<bits/stdc++.h>

using namespace std;


int main(){



    int k;
    vector<int> power;
    int reach;

    cin>>k;
     
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        power.push_back(x);
        
    }
    cin>>reach;
    int sum=0;

    for(int j=0;j<power.size();j++){
        sum=sum+power[j];
        if(sum>=reach) {
            cout<<j;
            break;
        }
        else continue;

    }


}