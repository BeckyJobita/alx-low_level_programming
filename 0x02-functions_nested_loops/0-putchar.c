#include"main.h"
/**
 * main -Entry
 * Return: 0
 * char-used to represent character variables
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
