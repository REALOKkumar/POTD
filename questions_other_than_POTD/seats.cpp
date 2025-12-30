#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int moves=0;

        for(int i=0;i<students.size();i++){
            moves+=abs(seats[i]-students[i]);

        }

        return moves;
    }
};


int main(){
    Solution sol;
    vector<int> seats = {3,1,5}, students = {2,7,4};

    cout<<"Minimum Moves to adjust is "<<sol.minMovesToSeat(seats,students);
    return 0;
}