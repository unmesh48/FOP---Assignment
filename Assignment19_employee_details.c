#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;
    int day, month, year;
    float salary;
};

void countEmployees(int n) {
    printf("Total number of employees = %d\n", n);
}

void countGender(struct EMPLOYEE e[], int n) {
    int male = 0, female = 0;

    for(int i = 0; i < n; i++) {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("Male employees = %d\n", male);
    printf("Female employees = %d\n", female);
}

void salaryAbove(struct EMPLOYEE e[], int n) {
    printf("Employees with salary > 10000:\n");
    for(int i = 0; i < n; i++) {
        if(e[i].salary > 10000)
            printf("%s\n", e[i].name);
    }
}

void asstManager(struct EMPLOYEE e[], int n) {
    printf("Employees with designation Asst Manager:\n");
    for(int i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0)
            printf("%s\n", e[i].name);
    }
}

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE e[n];

    for(int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf(" %[^\n]", e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining (dd mm yyyy): ");
        scanf("%d %d %d", &e[i].day, &e[i].month, &e[i].year);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n");
    countEmployees(n);
    countGender(e, n);
    salaryAbove(e, n);
    asstManager(e, n);

    return 0;
}