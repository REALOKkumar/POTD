#include<iostream>
using namespace std ;

void findfirstandlast(string name,char ft,char lt ,int *first, int *last){
    *first = -1;
    *last = -1;

    for(int i=0; i< name.size();i++){
        if(name[i]==ft){
            *first=i;
            break;
        }
    }
    for(int i=name.size()-1 ;i>=0;i--){
        if(name[i]==lt){
            *last=i;
            break;
        }
    }
}





int main(){
    string name= "alok"; 
    char lt='k',ft='k';
    
    
    int first,last;
    
   findfirstandlast(name, ft, lt,&first,&last);

   cout<<"first "<<ft <<" is at "<<first<<endl;
   cout<<"last "<<lt <<" is at "<<last;
    
}











