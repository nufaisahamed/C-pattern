#include <stdio.h>
int main()
{
    int row = 5;
    for (int i = 1; i <= row; i++)

    {
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }

        for (int k = 1; k <=2*(row-i); k++)
        {
            printf("  ");
        }
        

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = row-1; i >=1; i--)

    {
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }

        for (int k = 1; k <= (row-i)*2; k++)
        {
            printf("  ");
        }
        

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
