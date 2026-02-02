#include <bits/stdc++.h>
using namespace std;



      int summ(int n,int sum){
          if(n==0){
              return sum;
          }
          sum=sum+n;
          n--;
          summ(n,sum);
      }
    int findSum(int n) {
        // code here
        int sum=0;
        return summ(n,sum);
        
    }



int main(){
    cout<<findSum(5);
    return 0;
}