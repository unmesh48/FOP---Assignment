#include <stdio.h>

int main() {
    int ch;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("1.Add  2.Sub  3.Mul  4.Div\nChoice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1: printf("Result: %.2f", a + b); break;
        case 2: printf("Result: %.2f", a - b); break;
        case 3: printf("Result: %.2f", a * b); break;
        case 4: b != 0 ? printf("Result: %.2f", a / b)
                       : printf("Cannot divide by zero"); break;
        default: printf("Invalid choice");
    }

    return 0;
}
