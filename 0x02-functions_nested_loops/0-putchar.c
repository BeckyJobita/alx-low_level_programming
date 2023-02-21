#include"main.h"
/**
 * main -Entry
 * char -a data type that holds one character (letter, number, etc.) of data.
 * Return: 0
 */
int _putchar(char);

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
