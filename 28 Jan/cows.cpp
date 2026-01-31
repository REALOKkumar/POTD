#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
  
    bool ispossible(vector<int>& stalls,int k,int i){
        int cows=1,last=stalls[0];
        
        for(int j=1;j<stalls.size();j++){
            if(stalls[j]-last >= i){
                cows++;
                last=stalls[j];
            }
        }
        if(cows>=k){
            return true;
        }
        return false;
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        
        sort(stalls.begin(),stalls.end());
        //now stalls are in sorterd order
        
        int n=0,m=stalls[stalls.size()-1]-stalls[0],mid;
        
        // this is brute solution 
        
        // for(int i=1;i<m;i++){
        //     if(ispossible(stalls,k,i)==true){
        //         continue;
        //     }
        //     else return i-1;
            
        // }
        
        
        
        //optimal solution 
        while(n<=m){
            mid=m+(n-m)/2;
            if(ispossible(stalls,k,mid)==true){
                n=mid+1;
            }
            else{
                m=mid-1;
            }
        }
        return m;
        
        
        
         
    }
};


int main(){
    Solution sol;
    vector<int> stalls ={5,4,3,2,1,1000000000};
    int k=2;
    cout<<sol.aggressiveCows(stalls,k);
    return 0;
}