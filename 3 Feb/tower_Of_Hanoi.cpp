#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        //it follows pattern no of moves = 2^n -1;
        return(1LL << n)-1;
    }


int main() {
    

    int n=3;
    cout<<towerOfHanoi(n,3,4,2);
    return 0;
}