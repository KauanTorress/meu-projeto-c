#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Pega valores do usuário
    int x = get_int("x: ");
    int y = get_int("y: ");

    //Diz se X é menor, maior ou igual a Y
    if (x < y)
    {
        printf("x is less than y\n");
    } else if (x > y)
    {
        printf("x is bigger than y\n");
    } else
    {
        printf("x is equal y\n");
    }
}
