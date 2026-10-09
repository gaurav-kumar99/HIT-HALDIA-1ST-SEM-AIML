#include<stdio.h>
int main(){
    int num,count=0,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;
    while(temp != 0){
        count++;
        temp /= 10;
    }
    printf("The number of digits in %d is: %d\n", num, count);
    return 0;
}