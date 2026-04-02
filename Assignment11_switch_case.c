#include <stdio.h>
#include <math.h>

int main() {
    int num, choice, i;
    long long fact = 1;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n1. Square Root");
    printf("\n2. Square");
    printf("\n3. Cube");
    printf("\n4. Check Prime");
    printf("\n5. Factorial");
    printf("\n6. Prime Factors");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Square root = %.2f\n", sqrt(num));
            break;

        case 2:
            printf("Square = %.2f\n", pow(num, 2));
            break;

        case 3:
            printf("Cube = %.2f\n", pow(num, 3));
            break;

        case 4:
            if(num <= 1)
                isPrime = 0;
            else {
                for(i = 2; i <= num/2; i++) {
                    if(num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if(isPrime)
                printf("Prime number\n");
            else
                printf("Not a prime number\n");
            break;

        case 5:
            if(num < 0) {
                printf("Factorial not defined\n");
            } else {
                for(i = 1; i <= num; i++)
                    fact *= i;
                printf("Factorial = %lld\n", fact);
            }
            break;

        case 6:
            printf("Prime factors: ");
            for(i = 2; i <= num; i++) {
                while(num % i == 0) {
                    printf("%d ", i);
                    num = num / i;
                }
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}