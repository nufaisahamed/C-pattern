#include <stdio.h>
int main()
{
    int row = 5;
    for (int i = 1; i <= row; i++)

    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <=row ; i++)
    {
        for (int j = 1; j<=row-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=i ; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}