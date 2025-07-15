#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n_start;
    do
    {
        n_start = get_int("População inicial: ");
    }
    while (n_start < 9);

    int n_end;
    do
    {
        n_end = get_int("População final: ");
    }
    while (n_end < n_start);

    int years = 0;

    while (n_start < n_end)
    {
        n_start = n_start + (n_start / 3) - (n_start / 4);
        years++;
    }

    printf("Years: %i\n", years);
}
