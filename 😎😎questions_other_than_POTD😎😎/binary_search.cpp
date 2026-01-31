#include<iostream>
using namespace std ;
int main(){
    int arr[]={4,7,2,9,1,0, 32 ,54,60,1,98};
    int k=32;
    int mid,st=0,end=10;

    arr.sort()
   
    while(1){
        mid=(st+end)/2;
        if(arr[mid]<k){
            st=mid;
        }
        else if(arr[mid]>k){
            end=mid;
        }
        else if(arr[mid]==k){
            cout<<k<<" is at "<<mid<<" Mindex";
            break;
        }


    }







}