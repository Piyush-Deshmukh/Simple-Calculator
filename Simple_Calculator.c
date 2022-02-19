#include <stdio.h>

int main()
{
    float a, b; // Used float to get Decimal values also
    char op;    // Used char as " +,-,*,/ " are characters

    printf("\n\t\t\t\tWelcome to SIMPLE CALCULATOR\n\t\t\t\t\t**********\n\n");
    printf("Enter values in number1 operator number2 format : ");
    scanf("%f %c %f", &a, &op, &b);

    // Used switch case instead of if-else statement to get a clean code
    // Used %0.2f in switch statement below to print only till 2 decimal places
    switch (op)
    {
    case '+':
        printf("The sum of %0.2f and %0.2f is %0.2f", a, b, (a + b));
        break;

    case '-':
        printf("The subtraction of %0.2f and %0.2f is %0.2f", a, b, (a - b));
        break;

    case '*':
        printf("The multiplication of %0.2f and %0.2f is %0.2f", a, b, (a * b));
        break;

    case '/':
        printf("The division of %0.2f and %0.2f is %0.2f", a, b, (a / b));
        break;

    default:
        printf("Invalid input!");
        break;
    }
    return 0;
}