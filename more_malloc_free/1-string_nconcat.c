#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - init prot
 * Description: concatenates two strings
 * Return: pointer to result
 */
/**
 * @s1: first string
 */
/**
 * @s2: second string to concatenate
 */
/**
 * @n: bytes to allocate second string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = (s1 == NULL) ? 0 : strlen(s1);
	unsigned int len2 = (s2 == NULL) ? 0 : strlen(s2);
	unsigned int total_len = len1 + ((len2 < n) ? len2 : n);
	unsigned int i, j;
	char *result = malloc(sizeof(char) * (total_len + 1));

	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < n && j < len2; j++)
		result[len1 + j] = s2[j];
	result[total_len] = '\0';
	return (result);
}
