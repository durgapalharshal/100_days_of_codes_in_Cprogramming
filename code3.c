#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;
    printf("--- Rectangle Calculator ---\n");
    printf("Enter the length of the rectangle: ");
    if (scanf("%f", &length) != 1) {
        fprintf(stderr, "Error: Invalid input for length.\n");
        return 1;
    }

    printf("Enter the breadth (width) of the rectangle: ");
    if (scanf("%f", &breadth) != 1) {
        fprintf(stderr, "Error: Invalid input for breadth.\n");
        return 1;
    }
    if (length <= 0 || breadth <= 0) {
        fprintf(stderr, "Error: Length and breadth must be positive values.\n");
        return 1;
    }
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("\n--- Results ---\n");
    printf("Length: %.2f units\n", length);
    printf("Breadth: %.2f units\n", breadth);
    printf("Area of the Rectangle: %.2f square units\n", area);
    printf("Perimeter of the Rectangle: %.2f units\n", perimeter);

    return 0; 
}