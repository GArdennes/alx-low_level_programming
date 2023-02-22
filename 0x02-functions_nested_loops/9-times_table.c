#include "main.h"

/**
 * times_table - Prints the times table
 */

void times_table(void)
{
	int i;
	int a;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			product = i * a;
			printf("%d", product);
			if (a == 9)
				printf("\n");
			else
				printf(", ");
		}
	}
}
