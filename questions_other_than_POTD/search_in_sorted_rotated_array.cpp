#include <bits/stdc++.h>
using namespace std;




    int tarindex(vector<int>& nums,int target,int st,int en){
        int mid;
        while(st<=en){
            mid=st+(en-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                en=mid-1;
            }
            else if(nums[mid]<target){
                st=mid+1;
            }

        }
        
        return -1;

    }
    int minindex(vector<int>& nums){//find minimum element index
        int n=nums.size();
        int i=0,j=n-1,min=-1;
        while(i<j){
            min=i+(j-i)/2;

            if(nums[min] > nums[n-1]){
                i=min+1;
            }
            else{
                j=min;
            }

        }
        return i;
    }



    int search(vector<int>& nums, int target) {
        int min_index=minindex(nums);


        if(tarindex(nums,target,0,min_index-1)!=-1){
            return tarindex(nums,target,0,min_index);
        }

        else if(tarindex(nums,target,min_index,nums.size()-1)!=-1){
            return tarindex(nums,target,min_index,nums.size()-1);
        }
        return -1;
        
    }













int main(){
    vector<int> nums={4,5,6,7,8,9,10,0,1,2,3};
    for(int i:nums){
        cout<<i<<" ";
    }
    int target;
    cout<<endl;
    cout<<"target :";
    cin>>target;
    if(search(nums,target)!=-1){
        cout<<target<<"Exist in the array at "<<search(nums,target)<<" index";
    }
    else{
        cout<<"element soes not exist inthe array";
    }
    
    return 0;
}