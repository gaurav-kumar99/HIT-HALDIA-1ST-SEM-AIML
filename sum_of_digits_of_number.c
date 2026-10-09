#include<stdio.h>
int main(){
    int n,i,remainder,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int original_num=n;
    while(n!=0){
        remainder=n%10;
        sum+=remainder;
        n/=10;
    }
    printf("The sum of digits of %d is: %d\n", original_num, sum);
    return 0;
}