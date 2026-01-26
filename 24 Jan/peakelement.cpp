#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int ans=0;
        if(arr.size()==1) return 0;
        for(int i=0;i<arr.size();i++){
            if(i==0) {
                if(arr[i]>arr[1]) {
                    return i;
                }
            }
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
                return i;
                
            }
            if(i==arr.size()-1){
                if(arr[i]>arr[i-1]){
                    return i;
                }
            }
            
        }
        return -1;
    }
};

int main(){
    Solution sol;


    vector<int> arr={10, 20, 15, 2, 23, 90, 80};

    cout<<sol.peakElement(arr);
    return 0;

}