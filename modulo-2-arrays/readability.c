#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Pega texto do usuário
    string text = get_string("Texto: ");

    //Declaração de vars
    int letters = 0;
    int words = 1;
    int sentences = 0;

    //Faz o cálculo de letras, palavras e sentenças
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    //Cálculos feitos com intuito de descobrir grade final
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;

    float index = round(0.0588 * L - 0.296 * S - 15.8);
    int X = (int) index;

    //imprime o resultado
    if (X < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (X > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", X);
    }
}
