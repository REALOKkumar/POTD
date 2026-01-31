#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(),false);
        
        //first finf maximum element of array
        int max=candies[0];
        for(int i=1;i<candies.size();i++){
            if(candies[i]>max) max=candies[i];
        }

        for(int i=0;i<candies.size();i++){
            if(extraCandies+candies[i]>=max) ans[i]=true;
        }

        return ans;
    }
};
int main(){
    vector<bool> ans;
    vector<int> temp;
    vector<int> candies={2,3,5,1,3};
    int extra =3 ;
    Solution sol;
    ans=sol.kidsWithCandies(candies,extra);

    for(bool i:ans){
        cout<<i<<" ";
    }
    return true;
}