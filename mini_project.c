#include <stdio.h>

#define SUBTRACTION_MACRO(x, y) ((x) - (y))
#define SUM_MACRO(x, y) ((x) + (y))
#define MULTIPLY_MACRO(x, y) ((x) * (y))
#define DIVISION_MACRO(x, y) ((float)(x) / (y))

int main()
{
    int x, y;
    int choice;

    do
    {
        printf("______________MENU_____________\n");
        printf("Enter 1 for sum\n");
        printf("Enter 2 for multiplication\n");
        printf("Enter 3 for subtraction\n");
        printf("Enter 4 for division\n");
        printf("Enter 5 to exit program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter x and y: ");
            scanf("%d %d", &x, &y);
            printf("Sum = %d\n", SUM_MACRO(x, y));
            break;
        case 2:
            printf("Enter x and y: ");
            scanf("%d %d", &x, &y);
            printf("Multiplication = %d\n", MULTIPLY_MACRO(x, y));
            break;
        case 3:
            printf("Enter x and y: ");
            scanf("%d %d", &x, &y);
            printf("Subtraction = %d\n", SUBTRACTION_MACRO(x, y));
            break;
        case 4:
            printf("Enter x and y: ");
            scanf("%d %d", &x, &y);
            printf("Division = %.2f\n", DIVISION_MACRO(x, y));
            break;
        case 5:
            printf("Exiting program...\n");
            printf("Program exited successfully.\n");
            return 0;
        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}