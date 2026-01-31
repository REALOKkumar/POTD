#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> arr;
    arr={1,2,3,4,5,65};
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

   arr.erase(arr.begin() + 3);
   for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}
