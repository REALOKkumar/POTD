#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool ispossible(vector<int>& position ,int m,int mid){
        int last=position[0],ball=1;


        for(int i=1;i<position.size();i++){
            if(position[i]-last >= mid){
                last=position[i];
                ball++;

            }

        }
        if(ball>=m){
            return true;
        }
        return false;

    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());


        int st=0,en=position[position.size()-1]-position[0],mid;

        while(st<=en){
            mid=st+(en-st)/2;
            if(ispossible(position,m,mid)==true){
                st=mid+1;
            }
            else{
                en=mid-1;
            }
        }


        return en;
        
    }
};

int main() {
    Solution sol;
    vector<int> pos={5,4,3,2,1,1000000000};
    int m=2;
    cout<<sol.maxDistance(pos,m);

    
    return 0;
}