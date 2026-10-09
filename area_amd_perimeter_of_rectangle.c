#include<stdio.h>
int main(){
    int side1,side2,perimeter,area;
    printf("Enter the length of two sides of rectangle: ");
    scanf("%d %d",&side1,&side2);
    perimeter=2*(side1+side2);
    area=side1*side2;
    printf("Perimeter of rectangle = %d\n",perimeter);
    printf("Area of rectangle = %d",area);
    return 0;
}