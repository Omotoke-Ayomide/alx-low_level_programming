#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char m, t;

	for (m = 0; m <= 9; m++)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
	}
}
