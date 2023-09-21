#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: set of strings t be encoded
 *
 * Return: Encoded string
 */
char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtT1L";
	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
			}
		}
	}
	return (str);
}

