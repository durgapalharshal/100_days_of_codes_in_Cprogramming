#include <stdio.h>

int main() {
    int num1, num2;
    printf("--- Number Swapper (Without Temp Variable) ---\n");
    printf("Enter two integer numbers separated by a space (e.g., 10 20): ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        fprintf(stderr, "Error: Invalid input. Please enter two integers.\n");
        return 1;
    }
    printf("Before swap: %d %d\n", num1, num2);
    num1 = num1 + num2; 
    num2 = num1 - num2; 
    num1 = num1 - num2; 

    printf("After swap: %d %d\n", num1, num2);
     return 0; 
}