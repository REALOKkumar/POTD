#include<iostream>
using namespace std;
#include<vector>
int removeDuplicates(vector<int>& nums) {         // nums={0,1,1,1,1,2,2,3,3,4};
    int unique=nums[0],k=1;
        for(int i=1;i<nums.size();i++){//i=2
            if(nums[i]==unique){
                nums.erase(nums.begin() + i);
                unique=nums[i];
                k++;
            }
            else{
                unique=nums[i];
            }
            



        }
        return k;
    }



int main(){
    vector<int> nums;
    nums={0,0,1,1,1,2,2,3,3,4};

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<removeDuplicates(nums);


    cout<<endl;
    cout<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }





}
;



