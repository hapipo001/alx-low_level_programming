#include "main.h"

/**
 * print_alphabet_x10 -> function that prints the lowercase alphabets
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		for (j = 'a'; j <= 'z' ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
