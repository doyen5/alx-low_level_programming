#include"main.h"
/**
 * main - Entry point
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Description: prints _putchar using putchar prototype
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
