#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks for letter
 * Description: checks if input is a letter
 * Return: boolean
 */
/**
 * @c: gets abc to check
 * Description: checks if its a letter
 * Return: boolean
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
