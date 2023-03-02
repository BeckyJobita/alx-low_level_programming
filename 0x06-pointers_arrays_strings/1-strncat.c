#include"main.h"
/**
 * _strncat - concatenates two strings using at most
 * an input number of bytes from src
 * @dest: the string to be appended upon
 * @src: the string to be appended to @dest
 * @n: the number of bytes from src to be appended to dest
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dlen = 0;

	while (dest[index++])
	{
		dlen++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dlen] = src[index];
	}
	return (dest);
}
