// Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

// What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

// Input
// The input contains three positive integer numbers in the first line: n,  m and a (1 ≤  n, m, a ≤ 109).

// Output
// Write the needed number of flagstones.






// date--3 December 2025
// Time Complecity: O(1)

#include<iostream>
using namespace std ;


int main(){
    long long n,m,a,number_of_tiles;
    cin>>n;
    cin>>m;
    cin>>a;


    if(n%a==0 && m%a==0){
        number_of_tiles=((m*n) /(a*a));

        cout<<number_of_tiles;
    }
    else if(n%a!=0 && m%a==0){
        number_of_tiles=(((n/a)+1)*(m/a));
         cout<<number_of_tiles;
    }
    else if(n%a==0 && m%a!=0){
        number_of_tiles=((n/a)*((m/a)+1));
         cout<<number_of_tiles;
    }
    else{
        number_of_tiles=(((n/a)+1)*((m/a)+1));
         cout<<number_of_tiles;
    }

   




}