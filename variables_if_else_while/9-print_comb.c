#include <stdio.h>

/**
 * main - affiche tous les chiffres de 0 à 9 séparés par ", "
 *
 * Return: Toujours 0.
 */
int main(void)
{
int n = 0;

while (n < 10)
{
putchar(n + 48);      /* affiche le chiffre */
if (n != 9)
{
putchar(44);      /* ',' */
putchar(32);      /* espace ' ' */
}
n++;
}

putchar(10);             /* saut de ligne */

return (0);
}
