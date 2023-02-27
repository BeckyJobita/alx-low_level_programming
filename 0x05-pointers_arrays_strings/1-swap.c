#include"main.h"
/**
 * swap_int - swaps the values of two intergers
 *
 * @a: interger to be swapped with b
 * @b: interger to be swapped with a
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swch = *a;
	*a = *b;
	*b = swch;
}
