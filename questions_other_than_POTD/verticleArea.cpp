#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // first store the x axis data in an vector
        vector<int> x_data;
        int gap,max_gap=0;
        for(int i=0;i<points.size();i++){
            x_data.push_back(points[i][0]);
        }
        sort(x_data.begin(),x_data.end());
        for(int k=0;k<x_data.size()-1;k++){
            gap=x_data[k+1]-x_data[k]; 
            max_gap=max(max_gap,gap);
        }


        return max_gap;
        
    }
};


int main(){
    vector<vector<int>>  points = {{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}};
    Solution sol;
    cout<<sol.maxWidthOfVerticalArea(points);
    return 0;
}