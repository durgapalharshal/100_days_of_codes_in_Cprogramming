

#include <stdio.h>

int main() {
    int input;
    scanf("%d",&input);
    if (input < 0) {
        printf("Invalid Input\n");
    } else if (input <= 7 ) {
        printf("Fine ₹%d\n",input*2);
    } else if (input <= 14) {
        printf("Fine ₹%d\n",input*4);
    } else if (input <= 30) {
        printf("Fine ₹%d\n",input*6);
    } else {
        printf("Membership Cancelled\n");
    }
    return 0;
}