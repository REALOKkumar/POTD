#include <bits/stdc++.h>
using namespace std;


void solve() {
   // write your logic here
   vector<int> arr,ans;
   int num,a;
   cin>>num;
   for(int i=0;i<num;i++){
     cin>>a;
     arr.push_back(a);
   }
   
   ans.push_back(arr[0]);
   
   int it=1;
   for(int it=1;it<num;it++){
        if(arr[it-1]<=arr[it]){
            ans.push_back(arr[it]);


        }
        
        
        
        
        else{
            ans.push_back(1);
            ans.push_back(arr[it]);
        }
    }
   
   
   cout<<ans.size()<<endl;
   
   for(int i:ans){
     cout<<i<<" ";
   }
   cout<<endl;
   
   
   

            
   
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;



}