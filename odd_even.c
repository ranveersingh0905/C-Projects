//Program to check whether a number is odd or even
#include <stdio.h>

int main() {
    t num;
    printf("Enter a number: ");
    scanf("%", num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}