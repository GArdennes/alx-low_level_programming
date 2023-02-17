#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Executable using putchar function'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i){
		if(i == 'e'||i == 'q')
			i++;
		putchar(i);
	}
	printf("\n");
	return (0);
}
