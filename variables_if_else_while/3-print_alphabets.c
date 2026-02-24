#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description: Imprime l'alphabet en minuscules puis en majuscules
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
