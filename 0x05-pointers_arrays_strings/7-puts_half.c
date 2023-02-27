#include"main.h"
/**
 * puts_half - prints out half of a string
 * @str: string to be accessed
 * Return: 0
 */
void puts_half(char *str)
{
	int j = 0;
	int h;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		h = (j - 1) / 2;
		h = h + 1;
	}
	else
	{
		h = j / 2;
	}

	for (; h < j; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}

