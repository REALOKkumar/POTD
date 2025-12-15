#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int o_ptr=0;
        vector<vector<int>> new_vector(m, vector<int>(n));



        if(m*n!=original.size()){  // if there is too much space or no space to fill the elements, return []
            new_vector={};
        }

        
        else{
        for(int i=0;i<m;i++){// fill the elements in the ans_vector
            for(int j=0;j<n;j++){
                new_vector[i][j]=original[o_ptr];
                o_ptr++;

            }
        }
        }
        return new_vector;
        
    }
};

int main(){
    Solution sol;
    int m=3,n=2;
    vector<int> orig={1,2,3,4,5,6};
    vector<vector<int>> ans= sol.construct2DArray(orig,m,n);


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";

        }
        cout<<endl;
    }
}
