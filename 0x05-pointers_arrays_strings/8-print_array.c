#include"main.h"
#include<stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: the pointer
 * @n: the variable
 * Return: 0
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

