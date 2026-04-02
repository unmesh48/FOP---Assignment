#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    do {
        printf("\nMenu:\n");
        printf("1. Length of string\n");
        printf("2. Reverse string\n");
        printf("3. Compare strings\n");
        printf("4. Check palindrome\n");
        printf("5. Check substring\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length: %lu\n", strlen(str1));
                break;

            case 2: {
                char temp[100];
                strcpy(temp, str1);
                strrev(temp);
                printf("Reversed string: %s\n", temp);
                break;
            }

            case 3:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 4: {
                char temp[100];
                strcpy(temp, str1);
                strrev(temp);
                if (strcmp(str1, temp) == 0)
                    printf("Palindrome\n");
                else
                    printf("Not palindrome\n");
                break;
            }

            case 5:
                if (strstr(str1, str2) != NULL)
                    printf("Substring found\n");
                else
                    printf("Substring not found\n");
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 6);

    return 0;
}