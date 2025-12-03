



#include <stdio.h>

int main() {
    char input;
    scanf(" %c", &input);
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' ) {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }
    return 0;
}