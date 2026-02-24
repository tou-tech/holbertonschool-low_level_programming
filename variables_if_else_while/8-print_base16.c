#include <stdio.h>

/**
 * main - affiche tous les chiffres hexadécimaux en minuscules
 *
 * Return: Toujours 0.
 */
int main(void)
{
int n;

    /* affiche les chiffres de 0 à 9 */
for (n = 0; n < 10; n++)
putchar(n + 48);

    /* affiche les lettres a à f */
for (n = 0; n < 6; n++)
putchar(n + 97);

    /* saut de ligne */
putchar(10);

return (0);
}
