#include <stdio.h>

/**
*main - Point d'entrée
*
*Description:  prints all single digit numbers of base 10 starting from 0
*
*Return: Toujours 0 (Succès)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");

	return (0);
}
