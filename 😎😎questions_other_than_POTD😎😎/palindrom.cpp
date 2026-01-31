#include<iostream>
#include<vector>
using namespace std;


// class Solution {
// public:
//     bool isPalindrome(int x) {

        
//     }
// };

int main() {
    int s=6,ans=1;

    int x,temp,arr[s],size=0;
    cout<<"Number :";
    cin>>x;
    int original=x;

    for(int i=0;i<s;i++){
        if(x==10) break;
        
        arr[i]=temp;
        x=x/10;
        if(temp>=1)size++;
        else break;
        
       
        
    }
    
    int b=size-1;
    for(int j=0;j<size/2;j++){
        if(arr[j]!=arr[b]){
            ans=0;
            break;
            }
        b--;
    }



    
    if (x<0) cout<<"not palindrom";
    else if(ans==0) cout<<"not palindrom";
    else cout<<"palindrom";
    
    
    

}






