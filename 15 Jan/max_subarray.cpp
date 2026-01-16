#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        
        int p1=0,p2=k-1,max_sum=0;
        
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        while(p2<arr.size()){
            max_sum=max(sum,max_sum);
            sum+=arr[p2+1];
            sum-=arr[p1];
            p2++;
            p1++;
            
        }
        
        return max_sum;
        
        
    }
};

int main(){
    Solution sol;
    vector<int> arr={1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k=4;
    cout<<sol.maxSubarraySum(arr,k);
    return 0;
}