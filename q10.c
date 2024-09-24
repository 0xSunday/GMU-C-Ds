// Write a C program to categorize an employee's department based on their department code
// (e.g., 1: IT, 2: HR) and then check their designation (e.g., 1: Manager, 2: Assistant) using a
// nested switch statement.

#include <stdio.h>

int main() {
    int deptCode, desigCode;

    // Input department code
    printf("Enter department code (1: IT, 2: HR, 3: Finance, 4: Marketing): ");
    scanf("%d", &deptCode);

    // Outer switch to determine the department
    switch (deptCode) {
        case 1:
            printf("Department: IT\n");
            printf("Enter designation code (1: Manager, 2: Assistant): ");
            scanf("%d", &desigCode);

            // Nested switch for IT designations
            switch (desigCode) {
                case 1:
                    printf("Designation: Manager\n");
                    break;
                case 2:
                    printf("Designation: Assistant\n");
                    break;
                default:
                    printf("Invalid designation code for IT department\n");
                    break;
            }
            break;

        case 2:
            printf("Department: HR\n");
            printf("Enter designation code (1: Manager, 2: Assistant): ");
            scanf("%d", &desigCode);

            // Nested switch for HR designations
            switch (desigCode) {
                case 1:
                    printf("Designation: Manager\n");
                    break;
                case 2:
                    printf("Designation: Assistant\n");
                    break;
                default:
                    printf("Invalid designation code for HR department\n");
                    break;
            }
            break;

        case 3:
            printf("Department: Finance\n");
            printf("Enter designation code (1: Manager, 2: Assistant): ");
            scanf("%d", &desigCode);

            // Nested switch for Finance designations
            switch (desigCode) {
                case 1:
                    printf("Designation: Manager\n");
                    break;
                case 2:
                    printf("Designation: Assistant\n");
                    break;
                default:
                    printf("Invalid designation code for Finance department\n");
                    break;
            }
            break;

        case 4:
            printf("Department: Marketing\n");
            printf("Enter designation code (1: Manager, 2: Assistant): ");
            scanf("%d", &desigCode);

            // Nested switch for Marketing designations
            switch (desigCode) {
                case 1:
                    printf("Designation: Manager\n");
                    break;
                case 2:
                    printf("Designation: Assistant\n");
                    break;
                default:
                    printf("Invalid designation code for Marketing department\n");
                    break;
            }
            break;

        default:
            printf("Invalid department code\n");
            break;
    }

    return 0;
}
