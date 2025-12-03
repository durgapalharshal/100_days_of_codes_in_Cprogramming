#include <stdio.h>
#include <math.h> 

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    
    printf("--- Interest Calculator ---\n");
    printf("Enter Principal Amount: ");
    if (scanf("%f", &principal) != 1 || principal <= 0) {
        fprintf(stderr, "Error: Invalid or non-positive principal.\n");
        return 1;
    }

    printf("Enter Annual Interest Rate (as percentage, e.g., 5.5 for 5.5%%): ");
    if (scanf("%f", &rate) != 1 || rate <= 0) {
        fprintf(stderr, "Error: Invalid or non-positive rate.\n");
        return 1;
    }
    
    printf("Enter Time Period (in years): ");
    if (scanf("%f", &time) != 1 || time <= 0) {
        fprintf(stderr, "Error: Invalid or non-positive time.\n");
        return 1;
    }
    float decimalRate = rate / 100.0;
    simpleInterest = principal * decimalRate * time;
    float futureValueFactor = pow((1 + decimalRate), time);
    compoundInterest = (principal * futureValueFactor) - principal;
    printf("\n--- Results ---\n");
    printf("Principal Amount: $%.2f\n", principal);
    printf("Annual Rate: %.2f%%\n", rate);
    printf("Time Period: %.2f years\n", time);
    printf("------------------------------\n");
    printf("Simple Interest: $%.2f\n", simpleInterest);
    printf("Compound Interest (Annually): $%.2f\n", compoundInterest);

    return 0; 
}