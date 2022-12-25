// C program to find maximum between three numbers

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter Three Numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%d is maximum number.", num1);
    }
    else if (num2 > num3)
    {
        printf("%d is maximum number.", num2);
    }
    else if (num1 == num2 && num1 == num3)
    {
        printf("All number are same.");
    }
    else
    {
        printf("%d is maximum number. ", num3);
    }

    return 0;
}