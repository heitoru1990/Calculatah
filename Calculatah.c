#include "Calculatah.h"

int main()
{
    float num1 = 0;
    char op = ' ';
    float num2 = 0;

    printf("Insert the first number: ");
    if (scanf("%f", &num1) != 1)
    {
        printf("Invalid number.\n");
        return 1;
    }

    printf("Insert operator (only available: +, -, *, /): ");
    if (scanf(" %c", &op) != 1)
    {
        printf("Could not read the operator.\n");
        return 1;
    }

    printf("Insert the second number: ");
    if (scanf("%f", &num2) != 1)
    {
        printf("Invalid number.\n");
        return 1;
    }

    float result = 0;
    switch (op)
    {
        case '+':
        {
            result = Add(num1, num2);
            break;
        }

        case '-':
        {
            result = Sub(num1, num2);
            break;
        }

        case '*':
        {
            result = Mult(num1, num2);
            break;
        }

        case '/':
        {
            result = Div(num1, num2);
            break;
        }

        default:
        {
            printf("Invalid number...");
            return 1;
        }
    }
    
    DisplayResult(result);
    return 0;
}

float Add(float num1, float num2)
{
    return num1 + num2;
}

float Sub(float num1, float num2)
{
    return num1 - num2;
}

float Mult(float num1, float num2)
{
    return num1 * num2;
}

float Div(float num1, float num2)
{
    if (num2 == 0.0f)
    {
        return 0.0f;
    }

    return num1 / num2;
}

void DisplayResult(float result)
{
    printf("The result of the operation was: %f\n", result);
}