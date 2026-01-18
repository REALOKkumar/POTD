
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    prices[i]=prices[i]-prices[j];
                    break;
                }


            }
        }

        return prices;
        
    }
};


int main(){
    vector<int> nums={8,4,6,2,3};
    for(int i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
    Solution sol;
    sol.finalPrices(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
}