#include<bits/stdc++.h>
using namespace std;



int main(){

    string word,new_word="";
    char doub;
    cin >>word;
    int mistakes_allowed,corrected=0;
    cin>>mistakes_allowed;
    char ekk=word[0],doo=word[1];
    for(int i=0;i<word.size();i++){
        ekk=word[i];
        doo=word[i+1];
        if(ekk==doo){
            doub=word[i+2];
            if(ekk==doub) continue;
            else corrected++;
        }
        else{
            new_word.push_back(word[i]);
        }
    }

    if(corrected<=mistakes_allowed){
        cout<<new_word;
    }
    else{
        cout<<"NO";
    }

    return 0;
}