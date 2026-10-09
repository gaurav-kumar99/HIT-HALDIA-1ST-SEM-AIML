#include<stdio.h>
int main(){
    float a, b, c, sum;
    printf("Enter three floating-point numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    sum = a + b + c;
    printf("Average = %.2f", sum/3);
    return 0;
}