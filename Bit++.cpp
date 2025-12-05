#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n,x=0;
    string operation;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>operation;
        if(operation=="x++"|| operation=="++x"||operation=="X++"|| operation=="++X") x++;

        if(operation=="x--"|| operation=="--x"||operation=="X--"|| operation=="--X") x--;

    }


    cout<<x;

}