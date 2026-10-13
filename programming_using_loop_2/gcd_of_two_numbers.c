#include<stdio.h>
int main() {
 int a, b, gcd;
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
 if (a == 0 || b == 0) {
     printf("GCD is not defined for zero.\n");
     return 0;
 }
 else {
     while (b != 0) {
         gcd = b;
         b = a % b;
         a = gcd;
     }
     printf("GCD is %d\n", a);
 }
return 0;
}