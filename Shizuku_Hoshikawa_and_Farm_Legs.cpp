// Kaori wants to spend the day with Shizuku! However, the zoo is closed, so they are visiting Farmer John's farm instead.

// At Farmer John's farm, Shizuku counts n
//  legs. It is known that only chickens and cows live on the farm; a chicken has 2
//  legs, while a cow has 4
// .

// Count how many different configurations of Farmer John's farm are possible. Two configurations are considered different if they contain either a different number of chickens, a different number of cows, or both.

// Note that Farmer John's farm may contain zero chickens or zero cows.

// Input
// The first line contains a single integer t
//  (1≤t≤100
// )  — the number of test cases.

// The only line of each test case contains a single integer n
//  (1≤n≤100
// ).

// Output
// For each test case, output a single integer, the number of different configurations of Farmer John's farm that are possible.






// 2 December 2025 

#include<iostream>
using namespace std;


int config(int legs){
    int ans=0;
    if(legs<2) return 0;
    else if(legs%2!=0) return 0;
    else return (legs/4)+1;

}

int main(){
    int x,a;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>a;
        arr[i]=a;
    }
    cout<<endl<<endl;
    for(int i=0;i<x;i++){
        cout<<config(arr[i])<<endl;

    }
    
    
}

// Time Complexity: O(t)