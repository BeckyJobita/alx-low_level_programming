#include"main.h"
/**
 * _isupper-checks if number is uppercase
 * @c: Character to check
 * Return: 1 if character is uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
