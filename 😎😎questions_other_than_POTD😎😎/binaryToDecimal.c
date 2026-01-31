#include<stdio.h>
#include<math.h>

int main(){
    int b=1010001;
    int d=0,digit=0;
    int temp=b;
    while (temp>=1){
        digit+=1;        
        temp=temp/10;
    }


    for(int i=0;i<digit;i++){
        temp=b%10;
        d+=temp*(pow(2,i));  
        b=b/10;
    }


    printf("%d is the decimal number ",d);

}