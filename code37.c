

#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    int max = num1 > num2 ? num1 : num2;
    int lcm = max;
    while (1){
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }else {
            lcm = lcm + max;
        }
   }
    printf("%d",lcm);
    return 0;
}