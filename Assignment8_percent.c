#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;

    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("Percentage = %.2f", percentage);

    return 0;
}