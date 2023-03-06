#include<stdio.h>
#include"main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: 0 Always
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a] != '\0')
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
