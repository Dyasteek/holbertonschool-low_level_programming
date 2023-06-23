#include <stdio.h>

int numStart(char *s);
int getLength(int n, char *s);
int getExponent(int len);

int
_atoi(char *s)
{
	int i, first, len, aux, num, exp, negatives;
	unsigned int number;

	first = numStart(s);
	len = getLength(first, s);
	aux = first + len;
	exp = getExponent(len);
	number = 0;

	for ( ; first <= aux; first++)
	{
		num = (s[first] - 48) * exp;
		number = num + number;
		exp = exp / 10;
	}

	negatives = 0;

	for (i = 0; i < (first - len); i++)
	{
		if (s[i] == 45)
			negatives++;
	}

	if (negatives % 2 != 0)
		number = -number;

	return (number);
}

int
getExponent(int len)
{
	int exponent;

	for (exponent = 1; len > 0; len--)
	{
		exponent = exponent * 10;
	}

	return (exponent);
}

int
getLength(int n, char *s)
{

	int l = -1;

	while (s[n] >= 48 && s[n] <= 57)
	{
		l++;
		n++;
	}

	return (l);
}

int
numStart(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 47 && s[i] <= 57)
			break;
	}

	return (i);
}
