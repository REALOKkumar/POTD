// You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

// You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:

// An integer x.
// Record a new score of x.
// '+'.
// Record a new score that is the sum of the previous two scores.
// 'D'.
// Record a new score that is the double of the previous score.
// 'C'.
// Invalidate the previous score, removing it from the record.
// Return the sum of all the scores on the record after applying all the operations.

// The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.



// 2 Dec 2025






//Time Complexity : O(n) 

#include<iostream>
using namespace std ;
#include<vector>

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C") v.pop_back();
            else if(operations[i]=="D") v.push_back(v[(v.size()-1)]*2);
            else if(operations[i]=="+") v.push_back(v[v.size()-1]+v[v.size()-2]);
            else v.push_back(stoi(operations[i]));
            
            
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<endl;
           
        // }


        for(int i=0;i<v.size();i++){
            sum+=v[i];
           
        }

        return sum;
        
    }
};



int main() {
    int n;
    cin >> n;               // number of operations

    vector<string> ops(n);
    ops={"5","2","C","D","+"};

    Solution s;
    cout << s.calPoints(ops) << endl;
}



