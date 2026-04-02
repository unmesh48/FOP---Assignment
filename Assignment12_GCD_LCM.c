#include <stdio.h>

int smallestDivisor(int n) {
    if (n <= 1)
        return n;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0)
            return i;
    }
    return n;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int sd1 = smallestDivisor(num1);
    int sd2 = smallestDivisor(num2);
    int result = gcd(num1, num2);

    printf("\nSmallest divisor of %d = %d", num1, sd1);
    printf("\nSmallest divisor of %d = %d", num2, sd2);
    printf("\nGCD of %d and %d = %d\n", num1, num2, result);

    return 0;
}