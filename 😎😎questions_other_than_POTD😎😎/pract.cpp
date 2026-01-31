#include<iostream>

using namespace std;



int test(int *x){
    *x+=1;

}


int main(){
    
    int x=7;

    cout<<&x<< "   "<<endl;

    cout<<*(&x)<< "   "<<endl;

    test(&x);

    cout<<&x<< "   "<<endl;

    cout<<*(&x)<< "   "<<endl;

    cout<<sizeof(x);


} 