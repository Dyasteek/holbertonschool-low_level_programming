#include <stdio.h>

int
main(void)
{
	printf("Size of a char: %lu", sizeof(char));
	printf(" bytes\n");
	printf("Size of an int: %lu", sizeof(int));
	printf(" bytes\n");
	printf("Size of a long int: %lu", sizeof(long int));
	printf(" bytes\n");
	printf("Size of a long long int: %lu", sizeof(long long int));
	printf(" bytes\n");
	printf("Size of float: %lu", sizeof(float));
	printf(" bytes\n");
	return (0);
}
