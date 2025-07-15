#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./substitution Key\n");
        return 1;
    }

    int ocorrencias[256] = {0};

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        unsigned char c = argv[1][i];

        if (!isalpha(argv[1][i]))
        {
            printf("Key must only contain alphabetic characters.\n");
            return 1;
        }
        else if (ocorrencias[c] > 0)
        {
            printf("Key must not contain repeated characters.\n");
            return 1;
        }
        else if (strlen(argv[1]) != 26)
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
        ocorrencias[c]++;
    }

    string key = argv[1];
    string text = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char l = text[i];

        if (isalpha(l))
        {
            int index = tolower(l) - 'a';
            char substituto = key[index];

            if (isupper(l))
                printf("%c", toupper(substituto));
            else
                printf("%c", tolower(substituto));
        }
        else
        {
            printf("%c", l);
        }
    }
    printf("\n");
    return 0;


}
