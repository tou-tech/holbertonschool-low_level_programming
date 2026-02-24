#include <stdio.h>

/**
* main - Point d'entré
*
*Description: exclure les lettres 'q' et 'e'
*
*Return: Toujours 0 (Succès)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
		{
			putchar(la);
		}
	}
	putchar('\n');
	return (0);
}

