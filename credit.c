#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long numero;
    do
    {
        numero = get_long("Número do cartão: ");
    }
    while (numero < 0);

    int soma = 0;
    int posicao = 0; //conta a posição dos digitos (0 para o último dígito)
    long copia_digitos = numero;
    long copia_prefixo = numero;
    int unidade = 0;

    while (numero > 0)
    {
        int digito = numero % 10;

        //se for posição ímpar
        if (posicao % 2 == 1)
        {
            int mult = digito * 2;
            //se deu dois digitos, soma eles
            if (mult > 9)
            {
                soma += (mult % 10) + (mult / 10);
            }
            else
            {
                soma += mult;
            }
        }
        else
        {
            //posição par = soma direto
            soma += digito;
        }

        numero /= 10;
        posicao++;
    }

    if (soma % 10 == 0)
    {
        //Cartão válido!
    }
    else
    {
        printf("Cartão Ínvalido\n");
    }

    while (copia_digitos > 0)
    {
        copia_digitos /= 10;
        unidade++;
    }

    while (copia_prefixo >= 100)
    {
        copia_prefixo /=10;
    }

    int primeiros = copia_prefixo; //dois primeiros digitos



    if (soma % 10 == 0)
    {
      if ((primeiros == 34 || primeiros == 37) && unidade == 15)
      {
        printf("American Express\n");
      }
      else if ((primeiros == 51 || primeiros == 52 || primeiros == 53 || primeiros == 54 || primeiros == 55) && unidade == 16)
      {
        printf("MasterCard\n");
      }
      else if ((unidade == 13 || unidade == 16) && primeiros / 10 == 4 )
      {
        printf("Visa\n");
      }
    }
    else
    {
        printf("Cartão Ínvalido\n");
    }

}
