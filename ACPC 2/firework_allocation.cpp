#include<bits/stdc++.h>
using namespace std;

int max_val(vector<int> &arr){
    int max_arr=0,max_index=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max_arr){
            max_arr=arr[i];
            max_index=i;
        }
        
    }

arr[max_index]=max_arr/2;

  


    return max_arr;



}



int main(){
    int size,min,ans=0;
    vector<int> arr;
    cin >>size>>min;
    for(int i=0;i<size;i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }


    for(int j=0;j<min;j++){

        // cout<<max_val(arr)<<endl;

        ans+=max_val(arr);

    }


    cout<<ans;

    return 0;
}




















// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int size, k;
//     long long ans = 0;

//     cin >> size >> k;

//     // Max Heap
//     priority_queue<int> pq;

//     for(int i = 0; i < size; i++){
//         int val;
//         cin >> val;
//         pq.push(val);
//     }

//     for(int i = 0; i < k; i++){
//         int mx = pq.top();   // brightest firework
//         pq.pop();

//         ans += mx;

//         pq.push(mx / 2);     // floor(b/2)
//     }

//     cout << ans;
//     return 0;
// }
