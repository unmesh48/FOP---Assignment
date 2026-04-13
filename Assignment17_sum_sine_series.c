#include <stdio.h>

int main() {
    int n, i, j;
    float x, sum = 0, term, fact, power;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        power = 1;
        fact = 1;

        for(j = 1; j <= (2*i + 1); j++) {
            power = power * x;
            fact = fact * j;
        }

        term = power / fact;

        if(i % 2 == 0)
            sum = sum + term;
        else
            sum = sum - term;
    }

    printf("Sum of sine series = %f\n", sum);

    return 0;
}