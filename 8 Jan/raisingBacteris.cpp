#include<bits/stdc++.h>
using namespace std;
// time complexity O(log n)


int main(){
    int x,ans=0,temp;;
    cin>>x;
    while(x>=1){
        int i=x%2;
        x=x/2;
        if(i==1) ans++ ;
    }
    cout<< ans;
    return 0;
}