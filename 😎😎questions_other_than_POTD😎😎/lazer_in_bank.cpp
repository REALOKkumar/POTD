#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int lazer=0;
        vector<int> lights;

        for(string i:bank){
            int l=0;
            for(char j:i){
                if(j=='1') l++;
            }
            if(l!=0) lights.push_back(l);
        }
        lights.push_back(0);

        for(int k=0;k<lights.size()-1;k++){
            lazer=lazer+(lights[k]*lights[k+1]);
        }


        return lazer;



        
    }
};


int main (){
    Solution sol;
    vector<string> bank={"011001","000000","010100","001000"};
    cout<<sol.numberOfBeams(bank);

    return 0;

}