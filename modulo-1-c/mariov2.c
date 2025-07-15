#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n;
    do
    {
        n = get_int("Altura: ");
    }
    while (n < 1 || n > 8);


    for (int i = 0; i < n; i++)
    {
        for (int e = 0; e < n - i - 1; e++)
        {
            printf(".");
        }

        for (int h = 0; h <= i; h++)
        {
            printf("#");
        }

            printf("..");

        for (int h2 = 0; h2 <= i; h2++)
        {
            printf("#");
        }
        printf("\n");
    }
}
