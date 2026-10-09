#include<stdio.h>
int main(){
    float marks[5], total=0, average;
    printf("Enter marks of 5 subjects: ");
    for(int i=0; i<5; i++){
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    average = total/5;
    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Grade: ");
    if(average >= 90){
        printf("A");
    }
    else if(average >= 80){
        printf("B");
    }
    else if(average >= 70){
        printf("C");
    }
    else if(average >= 60){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}