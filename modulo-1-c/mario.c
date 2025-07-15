#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size (1-8): ");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        for(int e = 0; e < n - i - 1; e++)
        {
            printf(" ");
        }


        for(int a = 0; a <= i; a++)
        {
            printf("#");
        }

        printf("\n");
    }

}
