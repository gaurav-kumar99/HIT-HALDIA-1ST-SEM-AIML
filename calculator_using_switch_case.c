#include<stdio.h>
int main() {
    int choice;
    float num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %f\n", result);
            break;
        case 4:
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}