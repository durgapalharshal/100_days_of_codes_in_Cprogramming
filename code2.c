#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, product;
    float quotient; 

    printf("Enter two integer numbers separated by a space (e.g., 10 2): ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    printf("\n--- Results ---\n");
    printf("Sum=%d, Diff=%d, Product=%d", sum, diff, product);
    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf(", Quotient=%.2f\n", quotient);
    } else {
        printf(", Quotient=Division by Zero Error\n");
    }

    return 0;
}