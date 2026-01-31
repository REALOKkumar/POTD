//a armstrong number is a number which is equal to the sum of square/cube of the digits in that particular number
// if 153  is the number so if 1x1x1 + 5x5x5 + 3x3x3 == 153

#include<stdio.h>
int power(int n ,int step){  
    int p = n;
    for (int i = 1 ; i < step ; i++) 
    {
        p = p * n;
    }
    return p ;

}


int main(){
    int num,step=0,temp,sum=0;

    
    printf("Enter a number :");
    scanf("%d",&num);
    int copy=num;
    int digits = num;
    while (digits > 0) {
        step++;
        digits /= 10;
    }



    while (copy>=1){
         temp=copy%10;   
         sum +=power(temp,step); 
         copy=copy/10;        
        
     }


     if (sum==num) printf ("%d is a armstrong number ",num);
     else printf("%d is Not a armstrong number ",num);    

}