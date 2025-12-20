#include<bits/stdc++.h>

#include<iostream>
using namespace std;





int tell_the_number( int final,string moves){
    for(int l=0;l<moves.size();l++){
        if( moves[moves.size()-1-l]=='D'){
            final++;
        }
        else{
            final--;
        }

    }
    return (final % 10 + 10) % 10   ;            //check ???

}



int main(){
    // no of inputs
    
    vector<vector<int>> final_ans;
    // cout<<"kitni baar ";//////
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int weel;
        // cout<<"kitna weels ";//////

        cin>>weel;
        vector<int> final_numbers;
        for(int j=0;j<weel;j++){
            int num;

            cin>>num;
            final_numbers.push_back(num);
        }
        vector<int> ans;
        //pre operations
        for(int k=0;k<weel;k++){
            
            int n_operations; 
            string moves;
            cin>> n_operations;
            cin >>moves;
            ans.push_back(tell_the_number(final_numbers[k],moves));

        }
        // for(int i=0;){
            final_ans.push_back(ans);
        // }
    }

    for (int i = 0; i < final_ans.size(); i++) {
        for (int j = 0; j < final_ans[i].size(); j++) {
            cout << final_ans[i][j] << " ";
        }
        cout << endl;
    }
}
