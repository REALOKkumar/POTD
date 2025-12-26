#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool bracket(string s) {
        stack<char> contain;
        for(int i:s){
            if(  i=='('   ||    i=='{'   ||   i=='['  ){
                contain.push(i);
            }
            
            else{
                if(contain.empty()) return false;
                char last=contain.top();


                contain.pop();
                if(i==')'&&last !='(' ||  
                   i==']' && last !='['  || 
                   i=='}' && last !='{') return false;
                

            }
        }

        return contain.empty();

        
    }
};




int main(){
    Solution sol;
    string s="{}{}[]()";
    if(sol.bracket(s)) cout<<"valid";
    else cout<<"invalid";

    return 0;
}














