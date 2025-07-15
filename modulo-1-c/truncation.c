#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Pega os números do usuário
    long x = get_long("x: ");
    long y = get_long("y: ");

    //divide os números
    float z = (float) x / (float) y;
    printf("%f\n", z);
}
