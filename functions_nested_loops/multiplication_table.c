#include <stdio.h>

/**
 * print_table - prints a multiplication table
 * @size: size of the table
 *
 * Description: Prints a square multiplication table based on size.
 */

 void print_table(int size)
{
int row, col;

for (row = 1; row <= size; row++)
{
for (col = 1; col <= size; col++)
{
printf("%d" , row*col);
}
printf("\n");
}
}
/**
 * main - entry point
 *
 * Description: Entry point of the program that calls print_table.
 * Return: Always (0)
 */
 int main(void)
{
print_table(4);
return ( 0 );
}