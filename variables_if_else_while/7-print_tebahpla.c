#include <stdio.h>

/**
 * main - affiche l'alphabet en minuscules à l'envers
 *
 * Return: Toujours 0.
 */
int main(void)
{
int c = 122; /* 'z' en ASCII */

while (c >= 97) /* 'a' en ASCII */
putchar(c--);

putchar(10); /* saut de ligne */

return (0);
}

