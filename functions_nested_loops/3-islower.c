#include <ctype.h>
#include "main.h"
/**
 * _islower - initializes funct
 * Description: Checks for lowercase characters
 * Return: 0
 */
/**
 * @c: gets character to check
 * Description: checks for lowercase
 * Return: data
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
