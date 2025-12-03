#include <stdio.h>
#define PI 3.1415926535

int main() {
    float radius;
    float area, circumference;

    printf("--- Circle Calculator ---\n");
    printf("Enter the radius of the circle: ");
    if (scanf("%f", &radius) != 1) {
        fprintf(stderr, "Error: Invalid input for radius.\n");
        return 1;
    }
    if (radius <= 0) {
        fprintf(stderr, "Error: Radius must be a positive value.\n");
        return 1;
    }
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("\n--- Results ---\n");
    printf("Input Radius: %.2f\n", radius);
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);


    return 0; 
}