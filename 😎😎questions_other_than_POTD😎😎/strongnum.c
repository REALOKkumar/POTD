#include<stdio.h>


int facta(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}


int main(){
    int num,temp,plus=0;
    printf("Enter a number :");
    scanf("%d",&num);
    int numa=num;

    while(numa>=1){
        temp=numa%10;
        plus +=facta(temp);

     
        numa=numa/10;
    }
    if(plus==num) {
        printf("it is a strong numbre ");
    }
    else{

     printf("not  a strong number");
    }
}
