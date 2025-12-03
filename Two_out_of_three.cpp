
#include<iostream>
#include<vector>
using namespace std;


bool find(vector<int>& arr, int x) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == x) 
            return true;
    }
    return false;
}
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {

        vector<int> ans;
        for(int x:nums1){
            for( int y:nums2){
                if(x==y && !find(ans,y)) ans.push_back(y);
            }
            for( int z:nums3){
                if(x==z && !find(ans,z)) ans.push_back(z);
            }
        }
        for(int x:nums2){
            for( int y:nums1){
                if(x==y && !find(ans,y)) ans.push_back(y);
            }
            for( int z:nums3){
                if(x==z && !find(ans,z)) ans.push_back(z);
            }
        }
        return ans;
    }
};

int main() {
    Solution s;

    // INPUTS
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {3,4,5};
    vector<int> nums3 = {5,3,7};

    // FUNCTION CALL
    vector<int> result = s.twoOutOfThree(nums1, nums2, nums3);

    // OUTPUT
    cout << "Output: ";
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}