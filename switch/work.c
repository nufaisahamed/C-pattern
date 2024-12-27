#include <stdio.h>
int main()
{

    // reverse number pyramid
    int row = 5;

        for (int i = row; i >= 1; i--)
        {
            for (int j = 1; j <= row; j++)
            {
                printf("");
            }
            for (int k = 1; k <= i; k++)
            {
                printf("%d ", k);
            }
            printf("\n");
        }

    // k pattern

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <= row; i++)

    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // left half pyramid

    for (int i = 1; i <= row; i++)

    {
        for (int j = 1; j <= row-i; j++)
        {
            printf("  ");
        }

        for (int s = 1; s <=i; s++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    // number triangular

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; i <= row - i; j++)
        {
            printf("");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%d", i);
        }
       printf("\n");
    }

    // zero one traingle
    

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j)% 2==0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}