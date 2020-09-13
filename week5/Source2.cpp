#include<stdio.h>
int main()
{
    int number, i, x, n = 1;
    scanf("%d", &number);
    n = number - 1;
    for (x = 1; x <= number; x++)
    {
        for (i = 1; i <= n; i++)
            printf(" ");
            n--;
        for (i = 1; i <= 2 * x - 1; i++)
            printf("*");
        printf("\n");
    }
    n = 1;
    for (x = 1; x <= number - 1; x++)
    {
        for (i = 1; i <= n; i++)
            printf(" ");
            n++;
        for (i = 1; i <= 2 * (number - x) - 1; i++)
            printf("*");
        printf("\n");
    }
    return 0;
}