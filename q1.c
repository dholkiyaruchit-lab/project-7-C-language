#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}
float div(int a, int b)
{
    return (float)a / b;
}
int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int choice, num1, num2;
    while (1)
    {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exit program...!\n");
            break;
        }
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        switch (choice)
        {
        case 1:
            printf("Addition is: %d\n", add(num1, num2));
            break;

        case 2:
            printf("Subtraction is: %d\n", sub(num1, num2));
            break;

        case 3:
            printf("Multiplication is: %d\n", multi(num1, num2));
            break;

        case 4:
            if (num2 != 0)
                printf("Division is: %.2f\n", div(num1, num2));
            else
                printf("Cannot divide by zero!\n");
            break;

        case 5:
            printf("Modulus is: %d\n", mod(num1, num2));
            break;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}