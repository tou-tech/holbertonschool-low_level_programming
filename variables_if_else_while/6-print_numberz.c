#include <stdio.h>

/**
 * main - affiche tous les chiffres d'une seule base (0 à 9)
 *
 * Return: Toujours 0.
 */
int main(void)
{
int n = 0;

while (n < 10)
putchar(n++ + 48);

putchar(10);

return (0);
}
