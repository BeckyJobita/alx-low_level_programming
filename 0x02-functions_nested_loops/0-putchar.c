#include"main.h"
/**
 * main -Entry
 * Return: 0
 * char-a data type that holds one character (letter, number, etc.) of data.
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
	_putchar(*ch);
	ch++;
	}
	_putchar('\n');
return (0);
}
