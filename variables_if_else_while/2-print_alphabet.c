#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description: Imprime l'alphabet en minuscules avec putchar
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
