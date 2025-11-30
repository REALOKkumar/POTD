#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    int total_cost=0,need;
    cin>>k;  //the cost of the first banana
    cin>>n;  //initial number of dollars the soldier has
    cin>>w;  // number of bananas he wants


    for(int i =1 ;i<=w;i++){
        total_cost+=i*k;

    }

    need= total_cost-n;
    if(need<0) cout<<0;

    else cout<<need;

}
