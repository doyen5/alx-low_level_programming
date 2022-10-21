#include "main.h"
/**
 * print_numbers - entry point
 * Description: Prints the numbers with _putchar
 * Return: void
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');

	_putchar('\n');
}
