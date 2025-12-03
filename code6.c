 
#include <stdio.h>

int main() {
    int num1, num2;
    int temp; 
    printf("--- Number Swapper (Using Temp Variable) ---\n");
    printf("Enter two integer numbers separated by a space (e.g., 3 5): ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        fprintf(stderr, "Error: Invalid input. Please enter two integers.\n");
        return 1;
    }
    printf("Before swap: %d %d\n", num1, num2);
    temp = num1; 
    num1 = num2; 
    num2 = temp; 
    printf("After swap: %d %d\n", num1, num2);

    return 0; 
}