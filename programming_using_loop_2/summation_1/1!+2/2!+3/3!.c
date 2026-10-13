#include<stdio.h>
int main(){
    int n,i;
    double sum=0.0,fact=1.0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0){
        printf("Summation is not defined for negative numbers.\n");
    }
    else{
        for(i=1;i<=n;i++){
            fact=1.0;
            for(int j=1;j<=i;j++){
                fact=fact*j;
            }
            sum=sum+(double)i/fact;
        }
        printf("Summation of 1/1! + 2/2! + ... + %d/%d! is %.6lf\n",n,n,sum);
    }   
    return 0;       
}