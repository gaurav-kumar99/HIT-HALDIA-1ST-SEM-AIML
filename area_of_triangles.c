#include<stdio.h>
int main(){
    int side1, side2, side3, perimeter;
    printf("Enter the sides of triangles: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    perimeter = side1 + side2 + side3;
    printf("Perimeter of triangle = %d", perimeter);
    return 0;
}