#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        // array sum
        int sum = 0, iterations = 0;
        for (int i : nums) {
            sum += i;
        }

        while (true) {
            if (sum % k == 0) {
                break;
            } else {
                iterations++;  // count iterations
                sum--;         // decrease sum
            }
        }

        return iterations;
    }
};

int main() {
    Solution sol;

    int k=4;
    vector<int> nums={3,5,6};
    

    cout << sol.minOperations(nums, k) << endl;

    return 0;
}
