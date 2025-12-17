#include<bits/stdc++.h>
using namespace std;


    class Solution {
    public:
        int minPlatform(vector<int>& arr, vector<int>& dep) {
            
            sort(arr.begin(), arr.end());
            sort(dep.begin(), dep.end());
            int n = arr.size();
            int need = 1,result = 1;
            int i = 1,j = 0;  
    
            while(i < n && j < n){
                if(arr[i] <= dep[j]){
                    need++;
                    i++;
                }
               
                else{
                    need--;
                    j++;
                }
    
                result = max(result, need);
            }
    
            return result;
        }
    };


    int main(){
        Solution sol;
        vector<int> arr={900, 940, 950, 1100, 1500, 1800};
        vector<int> dep={910, 1200, 1120, 1130, 1900, 2000};

        cout<<sol.minPlatform(arr,dep);
        return 0;
    }