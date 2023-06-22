#include "main.h"
/**
 * puts2 - Main function
 * @str: Address of st
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
