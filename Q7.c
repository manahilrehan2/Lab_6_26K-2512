#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int row;

        if (i <= n)
            row = i;
        else
            row = 2 * n - i;

        // empty spaces
        for (int j = 1; j <= n - row; j++)
        {
            printf(" ");
        }

        // asterics
        for (int j = 1; j <= 2 * row - 1; j++)
        {
            if (j == 1 || j == 2 * row - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;

}