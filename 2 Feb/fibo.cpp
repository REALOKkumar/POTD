#include<bits/stdc++.h>
using namespace std;

class Solution {
public:  // 0 1 1 2 3 5 8 13
    int fibo(int _oo,int _o,int n){
        if(n==0) return _oo;
        
        return fibo(_o, _oo + _o, n - 1);
    }
    int fib(int n) {
        int  _oo=0 , _o=1;

        return fibo(_oo,_o,n);



        
    }
};

int main(){
    Solution sol;

    cout<< sol.fib(4);
    return 0;
}