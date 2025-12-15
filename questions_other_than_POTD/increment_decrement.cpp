#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(string i:operations){
            if( i=="X++"  || i=="++X"){
                ans++;
            }
            // else if( i=="X--"  || i=="--X"){
            //     ans--;
            // }
            else ans--;


        }

        return ans;
        
    }
};


int main(){


    vector<string> op={"X++","++X","--X","X--"};
    Solution sol;

    cout<< sol.finalValueAfterOperations(op);

}