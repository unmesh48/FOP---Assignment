#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b, result, fact = 1;
    
    while (1) {
        printf("\n1. Sum\n2. Difference\n3. Multiplication\n4. Division\n5. Power\n6. Factorial\n7. Exit\n");
        scanf("%d", &choice);

        if (choice == 7)
            break;

        printf("Enter two numbers: ");
        scanf("%lf %lf", &a, &b);

        switch (choice) {
            case 1:
                result = a + b;
                printf("Result = %.2lf", result);
                break;

            case 2:
                result = a - b;
                printf("Result = %.2lf", result);
                break;

            case 3:
                result = a * b;
                printf("Result = %.2lf", result);
                break;

            case 4:
                if (b != 0)
                    printf("Result = %.2lf", a / b);
                else
                    printf("Division by zero error");
                break;

            case 5:
                result = pow(a, b);
                printf("Result = %.2lf", result);
                break;

            case 6:
                fact = 1;
                for (int i = 1; i <= (int)a; i++)
                    fact *= i;
                printf("Factorial = %.0lf", fact);
                break;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}