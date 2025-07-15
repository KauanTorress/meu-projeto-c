#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // se codigo passar de dois comandos
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // verifica se o segundo argumento n é um dígito
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // converte a string argv[1] em um inteiro
    int key = atoi(argv[1]);
    string text = get_string("text: ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char c = text[i];

        if (isalpha(c))
        {
            // verifica se é um caracter alfabetico, e faz uso da formula
            char base = isupper(c) ? 'A' : 'a';
            printf("%c", (c - base + key) % 26 + base);
        }
        else
        {
            // caso seja um numero ou simbolo
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}
