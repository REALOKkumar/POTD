#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans_sum=0;
        for(int i=0;i<k;i++){
            int index=0,max=0;
            for(int j=0;j<gifts.size();j++){
                if(gifts[j]>max){
                    max=gifts[j];
                    index=j;
                }
            }
            max=sqrt(max);
            gifts[index]=max;

        }

        for(int k:gifts){
            ans_sum+=k;
        }

        return ans_sum;
        
    }
};








int main(){
    Solution sol;
    long long ans;
    vector<int> gifts={25,64,9,4,100};
    int k=4;
    ans=sol.pickGifts(gifts,k);
    cout<<ans;

    return 0;
}