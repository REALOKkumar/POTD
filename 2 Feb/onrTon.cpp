#include <bits/stdc++.h>
using namespace std;


    void pprriinntt(int n){
        if(n==0){
            return;
        }
        pprriinntt(n-1);
        cout<<n<<" ";
    }
    void printTillN(int n) {
        pprriinntt(n);
        return ;
        
    }


int main(){
    int n=5;
    
    printTillN(n);
    return 0;
}