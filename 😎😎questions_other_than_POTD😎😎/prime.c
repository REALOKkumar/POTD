#include<stdio.h>
int isprime(int num){
    int ans=1;
    for(int i=2;i<num;i++){
        if (num%i==0){
            ans=0;
        }
    }
    return ans;
}
int main (){
    int num ;
    printf("Enter a number :");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){ 
        if(isprime(i)) printf("%d\n",i);
    }
}