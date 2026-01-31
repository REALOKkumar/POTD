#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> points_inside;
        for(int i=0;i<queries.size();i++){
            
            int count=0;
            for(int j=0;j<points.size();j++){
                if(pow((points[j][0]-queries[i][0]),2)+pow((points[j][1]-queries[i][1]),2) <= pow(queries[i][2],2)) count++;
            }
            points_inside.push_back(count);
        }


        return points_inside;

        
    }
};

int main(){
    vector<vector<int>> points={{1,3},{3,3},{5,3},{2,2}};
    vector<vector<int>> queries = {{2,3,1},{4,3,1},{1,1,2}};


    Solution sol;
    vector<int> ans=sol.countPoints(points,queries);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }

    return 0;
}