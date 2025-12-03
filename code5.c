#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;
    printf("--- Celsius to Fahrenheit Converter ---\n");
    printf("Enter temperature in Celsius (e.g., 0 or 100): ");
    if (scanf("%f", &celsius) != 1) {
        fprintf(stderr, "Error: Invalid input for temperature.\n");
        return 1;
    }

    fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;
    printf("\n--- Result ---\n");
    printf("Celsius: %.2f\n", celsius);
    printf("Fahrenheit=%.2f\n", fahrenheit);
    return 0; 
}