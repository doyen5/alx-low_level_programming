#include <stdio>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar("\n");
	return (0);
}
