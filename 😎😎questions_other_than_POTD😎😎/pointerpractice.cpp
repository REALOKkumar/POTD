#include<iostream>
using namespace std ;

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}

int main (){
    int x=10,y=20;
    int *p1=&x;
    int *p2=&y;

 
    cout<<x <<" "<<y<<endl ;
    swap(p1,p2);
    cout<<x <<" "<<y<<endl<<endl <<endl;

    cout<<"x  "<<x<<endl;

    cout<<"&x  "<<&x<<endl;

    cout<<"p1  "<<p1<<endl;

    cout<<"*p1  "<<*p1<<endl;

    cout<<"&p1  "<<&p1<<endl;
   


}