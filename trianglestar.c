#include <stdio.h>
int main()
{

    int row = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j <= row - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d "\n);
        }
        printf("\n");
    }
}