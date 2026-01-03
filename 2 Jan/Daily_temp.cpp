#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(), 0);
        stack<int> st;
        for(int i = 0; i <temperatures.size(); i++) {
            while( !st.empty()&&temperatures[i]>temperatures[st.top()]){

                int idx=st.top();
                st.pop();
                answer[idx] =i-idx;

    }
            st.push(i);

        }

        return answer;
    }
};



int main(){
    Solution sol;
    vector<int> temprature={73,74,75,71,69,72,76,73};
    vector<int> ans=sol.dailyTemperatures(temprature);
    for(int i:ans){
    cout<<i<<" ";
    }

    return 0;
}