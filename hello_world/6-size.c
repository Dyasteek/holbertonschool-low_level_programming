#include <stdio.h>

int
main(void)
{
	printf("Size of a char: %u", sizeof(char));
	printf(" bytes\n");
	printf("Size of an int: %u", sizeof(int));
	printf(" bytes\n");
	printf("Size of a long int: %u", sizeof(long int));
	printf(" bytes\n");
	printf("Size of a long long int: %u", sizeof(long long int));
	printf(" bytes\n");
	printf("Size of float: %u", sizeof(float));
	printf(" bytes\n");
	return (0);
}
