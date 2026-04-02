#include <stdio.h>
#include <math.h>

int main() {
    long int binary;
    int decimal = 0, i = 0, rem;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while(binary != 0) {
        rem = binary % 10;
        decimal = decimal + rem * pow(2, i);
        binary = binary / 10;
        i++;
    }

    printf("Decimal number = %d\n", decimal);

    return 0;
}