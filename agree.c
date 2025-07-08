#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Coleta a resposta do usuário
    char c = get_char("Do you agree? ");

    //Análisa a resposta coletada
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed..\n");
    } else if (c == 'N' || c == 'n')
    {
        printf("Disagred..\n");
    }

}
