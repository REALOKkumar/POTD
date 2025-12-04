#include<iostream>
#include<vector>
#include <climits>

using namespace std ;


class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minimum = INT_MAX;
        int maximum = INT_MIN;

        for(int x : nums){
            minimum = min(minimum, x);
            maximum = max(maximum, x);
        }
        //cout<<minimum<<" "<<maximum;
        // gcd
        while(maximum % minimum != 0){
            int temp = maximum % minimum;
            maximum = minimum;
            minimum = temp;
        }

        return minimum;
    }


    
};
int main(){

        vector<int> nums={10,3,4,5,6,2,3,54,23,2,9};
        Solution obj;
        cout << obj.findGCD(nums);

    }
