/**
* @file row_sums.c
* @brief Computes the total sum of a rows x cols multiplication grid.
*/

#include <stdio.h>

/**
 * @brief Computes the sum of all products in a given row.
 *
 * For a row r and cols columns, computes: r*1 + r*2 + ... + r*cols.
 *
 * @param row  The row index (1-based).
 * @param cols The number of columns.
 * @return     The sum of all products in the row.
 */
int row_sum(int row, int cols)
{
int c;
int sum = 0;

for (c = 1; c <= cols; c++)
sum += row * c;

return (sum);
}



int total_sum(int rows, int cols)
{
int r;
int total = 0;
for (r = 1; r <= rows; r++)
{
total +=  row_sum(r, cols);
}

return (total);
}

/**
 * @brief Entry point. Prints the total sum of a 3x3 grid.
 *
 * @return 0 on success.
 */

int main(void)
{
printf("%d\n", total_sum(3, 3));
return (0);
}
