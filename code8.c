 
#include <stdio.h>

int main() {
    int n;          
    int sum = 0;    
    int i;          

    printf("--- Sum of First N Natural Numbers ---\n");
    printf("Enter a positive integer 'n' (e.g., 5 or 10): ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Error: Invalid input. Please enter a single positive integer.\n");
        return 1;
    }
    if (n <= 0) {
        fprintf(stderr, "Error: 'n' must be a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("\n--- Result ---\n");
    printf("Sum=%d\n", sum);

    return 0; 
}