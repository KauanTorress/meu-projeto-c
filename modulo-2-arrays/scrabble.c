#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    //Pega a palavra do usuário 1 e 2
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    //Pontua as palavras
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    //Mostra o vencedor
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }
}

//função responsavel pelo calculo
int compute_score(string word)
{
    int score = 0;

    for(int i = 0, n = strlen(word); i < n; i++)
    {
        if (isalpha(word[i]))
        {
            char upper = toupper(word[i]);

            int index = upper - 'A';

            score += POINTS[index];
        }
    }

    return score;
}
