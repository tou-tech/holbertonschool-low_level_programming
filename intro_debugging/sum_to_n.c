#include <stdio.h>

/**
 *sum_to_n - computes the sum of all integers from 1 to n
 *@n: the target number
 *
 *Return: the total sum
 */
int sum_to_n(int n)
{
int i;
int sum = 0;
/*Correction 1: Utiliser <= pour inclure n dans la somme */
for (i = 1; i <= n; i++)
{
sum += i;
}
/* Correction 2: Retourner le résultat du calcul, pas n */
return (sum);
}
/* -- DO NOT Modify the code below this line -- */
int main(void)
{
printf("%d\n", sum_to_n(10));
return (0);
}

