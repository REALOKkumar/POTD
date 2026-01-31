#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
    bool is_present(int x,vector<int>  arr){
        for(int i:arr){
            if(i==x){
                return true;
                break;
            }
        }
        return false;
    }

    
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans_array;
        for(int i:order){
            //check if i present in frends array 
            if(is_present(i,friends)){
                ans_array.push_back(i);
            }
        }


        return ans_array;
    }
};

int main(){
    vector<int> order={3,1,2,5,4};
    vector<int> friends={1,3,4};
    Solution sol;
    vector<int> result=sol.recoverOrder(order,friends);
    for(int i:result){
        cout<<i<<"  ";
    }

}