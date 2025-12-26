#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        // vector<int> arr;
        int len,ele,ans_1=0,ans_0=0;
        cin>>len;
        for(int j=0;j<len;j++){
            cin>>ele;
            // arr.push_back(ele);
            if(ele==1) ans_1++;
            if(ele==0) ans_0++;
        }
        cout<<ans_1+(ans_0*ans_0)<<endl;
    }
}