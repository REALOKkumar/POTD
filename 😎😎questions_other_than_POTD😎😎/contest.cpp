#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr,ans;

    arr.push_back({2,3,4});
    arr.push_back({2,3,4});
    arr.push_back({2,3,4});
    arr.push_back({2,3,4});
    arr.push_back({2,3,4});
    arr.push_back({2,3,4});

    // Print whole 2D array
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
            ans.push_back
        }
        cout << endl;   // new row
    }
}
