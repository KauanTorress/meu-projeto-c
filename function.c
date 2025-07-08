#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string resposta = get_string("Qual é o seu nome?");
    printf("Olá, %s\n", resposta);
}
