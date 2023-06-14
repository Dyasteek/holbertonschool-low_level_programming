#include <stdio.h>

int
main(void)
{
	printf("Size of a char: %u", sizeof(char));
	printf(" byte(s)\n");
	printf("Size of an int: %u", sizeof(int));
	printf(" byte(s)\n");
	printf("Size of a long int: %u", sizeof(long int));
	printf(" byte(s)\n");
	printf("Size of a long long int: %u", sizeof(long long int));
	printf(" byte(s)\n");
	printf("Size of float: %u", sizeof(float));
	printf(" byte(s)\n");
	return (0);
}
