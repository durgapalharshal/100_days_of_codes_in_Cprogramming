

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int binary=0, place=1;
    if (n==0) {
        printf("0");
        return 0;
    }
    
    if (n < 0) {
        n = -n;
    }
    while (n > 0) {
        int remainder = n % 2;
        binary = binary + (remainder * place);
        place *= 10;
        n = n / 2;
    }
    printf("%d",binary);
    return 0;
}