#include<iostream>
using namespace std;
#include<vector>;



class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> arr;
        int ptr=0,yrs_no=0;
        for(string i:words){
            for(char j:i ){
                if(j==x){
                    arr.push_back(ptr);
                    break;
                }
            }
            ptr++;
        }

        return arr;
    }
};



int main() {
    Solution sol;
    vector<string> words = {"alok", "kumar", "is", "the", "best"};
    char x = 't';

    vector<int> result = sol.findWordsContaining(words, x);

    for (int idx : result) {
        cout << idx << " ";
    }

    return 0;
}