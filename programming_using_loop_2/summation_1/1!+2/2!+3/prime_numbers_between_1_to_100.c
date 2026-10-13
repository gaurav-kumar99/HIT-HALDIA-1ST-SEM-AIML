#include<stdio.h>
int main(){
int n,i,flag;
printf("Prime numbers between 1 to 100 is:");
for (n=2;n<=100;n++){
flag=0;
for (i=2;i*i<=n;i++){
    if (n%i==0){
        flag=1;
        break;
    }
}
if (flag==0){
    printf("%d\n",n);}}

    return 0;
}