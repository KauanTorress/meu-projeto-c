#include <stdio.h>
#include <cs50.h>

int main(void)
{

    //solicita tamanho da grade ao usuário
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    //realiza a divisão de colunas
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
