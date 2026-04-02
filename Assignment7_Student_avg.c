#include <stdio.h>

int main() {
    char name[3][50];
    float marks[3];
    float total = 100;
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name[i]);

        printf("Enter marks of %s (out of 100): ", name[i]);
        scanf("%f", &marks[i]);
    }

    printf("\n--- Student Results ---\n");

    for(i = 0; i < 3; i++) {
        float percentage = (marks[i] / total) * 100;

        printf("Name: %s\n", name[i]);
        printf("Result: %.2f / %.2f\n", marks[i], total);
        printf("Percentage: %.2f%%\n\n", percentage);
    }

    return 0;
}
