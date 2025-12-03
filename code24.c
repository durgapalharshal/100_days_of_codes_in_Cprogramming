

#include <stdio.h>

int main() {
    int input;
    float bill;
    scanf("%d", &input);
    if (input <= 100) {
        bill = input * 5;
    } else if (input <= 200) {
        bill = (100 * 5) + ((input-100) * 9) ;
    } else {
        bill = (100 * 5) + (100 * 9) + ((input-200)*16) ;
    }
    printf("Bill = ₹%.0f\n", bill);
    return 0;
}