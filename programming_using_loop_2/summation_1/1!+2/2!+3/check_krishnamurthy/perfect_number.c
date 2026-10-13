#include<stdio.h>
int main(){
    int n,i,sum=1;
    scanf("%d",&n);
    if (n<=1){
        printf("%d is not a perfect number\n",n);
        return 0;
    }
        for (i=2;i*i<=n;i++){
            if (n%i==0){
                sum+=i;
                if (i*i!=n){
                    sum=sum+(n/i);
                }
            }
    }
    if (sum==n){
        printf("%d is perfect number",n);
    }
        else{
            printf("%d is not a perfect number",n);

        }
        return 0;
    }
