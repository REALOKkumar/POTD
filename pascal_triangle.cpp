#include<iostream>
#include<vector>
using namespace std;




class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // int ele, ptr=1;
        vector<vector<int>> ans(numRows);

        for(int i_=0;i_<numRows;i_++){

            vector<int> element(i_+1);
            for(int i=0;i<i_+1;i++){
                

                if(i == 0 || i == i_) {  //first and last element =1
                    element[i] = 1;       
                }

                else{
                    element[i] = ans[i_-1][i-1] + ans[i_-1][i];  
                    }
            }
            ans[i_] = element;
        }
        return ans;
        

        }

        
        
        
    
};


int main() {
    Solution sol;
    int numRows;
    cin >> numRows;

    vector<vector<int>> result = sol.generate(numRows);

    for(auto row : result) {
        for(int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}