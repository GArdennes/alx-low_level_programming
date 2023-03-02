#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: Result
 */

char *rot13(char *str)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolen;

	for (i = 0; str[i] != '\0'; i++)
	{
		boolen = 0;
		for (j = 0; alpha[j] != '\0' && boolen == 0; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = r[j];
				boolen = 1;
			}
		}
	}
	return (str);
}
