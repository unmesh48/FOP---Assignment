#include <stdio.h>

int main() {
    float basic, hra, ta, gross, tax, net;

    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;      // 10% HRA
    ta  = 0.05 * basic;      // 5% TA

    gross = basic + hra + ta;

    tax = 0.02 * gross;      // 2% professional tax
    net = gross - tax;

    printf("Gross Salary: %.2f\n", gross);
    printf("Net Salary: %.2f\n", net);

    return 0;
}
