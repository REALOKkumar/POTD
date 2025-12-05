// You are given two positive integers low and high.

// An integer x consisting of 2 * n digits is symmetric if the sum of 

// the first n digits of x is equal to the sum of the last n digits of x.

// Numbers with an odd number of digits are never symmetric.

// Return the number of symmetric integers in the range [low, high].

#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int sym;

        for(int i=low;i<=high;i++){
            int fh=0,sh=0;
            int num;
            vector<int> digit;
            while(i>0){
                num=i%10;
                digit.push_back(num);
                i=i/10;
            }
            if(digit.size()%2==0){
                for(int s=0;s<digit.size()/2;i++){
                    fh+=digit[s];
                    sh+=digit[(digit.size()-1)-s];
                }
                if(fh==sh) sym++;
            }
        }

        return sym;

        
    }
};

int main() {
    int low, high;
    cin >> low ;
    cin >>high;

    Solution obj;
    cout << obj.countSymmetricIntegers(low, high);

    return 0;
}



// Time Complexity = O(N × D)

// N = number of integers in the range

// D = number of digits per integer (≤ 10 for 32-bit int)