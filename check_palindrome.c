#include<stdio.h>
int main(){
    int num,original_num,rev=0,rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    original_num = num;
    while(num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if(original_num == rev){
        printf("%d is a palindrome.\n", original_num);
    }
    else{
        printf("%d is not a palindrome.\n", original_num);
    }
    return 0;
}