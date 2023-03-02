#include"main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase.
 * @str: the string to be changed
 * Return: a pointer to the converted string
 */
char *string_toupper(char *str)
{
	int index = 0;
	int i;

	while (str[index] != '\0')
	{
		index++;
	}

	for (i = 0; i < index; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
