#include <stdio.h>

int main() {
    int n;
    int binary = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        int rem = n % 2;       // get last binary digit
        binary = binary + rem * place;
        place = place * 10;    // shift place value
        n = n / 2;             // continue dividing
    }

    printf("Binary: %d\n", binary);

    return 0;
}
