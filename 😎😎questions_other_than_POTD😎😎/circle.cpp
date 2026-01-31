
#include <iostream>
#include <math.h>
using namespace std;


int main (){
  int n=70,center=n/2,rad=30;
  int x;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      x=sqrt(  (i-center)*(i-center)   +   (j-center)*(j-center)   );
      if (  x <=rad+1 && x>rad) cout<<"* ";
      else cout<<"  ";
    }
    cout<<endl;
  }
}


