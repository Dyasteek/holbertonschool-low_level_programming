#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: char
 * Description: Size of
 *
 * Return: On success 0
 */
int print_last_digit(int n)
{
	int i;

	if (n > 0 || n == 0)
	{
		i = n % 10;
		_putchar(i + '0');
	}
	if (n < 0)
	{
		n = n * -1;
		i = n % 10;
		_putchar(i + '0');
	}
	return (i);
}
