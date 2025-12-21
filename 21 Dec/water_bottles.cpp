#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drinked=numBottles;
        int empty=numBottles;

        while(empty>=numExchange){
            drinked+=empty/numExchange;
            empty=empty/numExchange+empty%numExchange;
        }
        return drinked;
    }
};


int main(){
    Solution sol;
    int numB= 15,numE= 4;

    cout<< sol.numWaterBottles(numB,numE);

    return 0;


}