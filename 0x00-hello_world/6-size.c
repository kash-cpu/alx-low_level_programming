#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 after printing the function
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("size of a char: %ld byte(s)\n", sizeof(a));
	printf("size of an int: %ld byte(s)\n", sizeof(b));
	printf("size of a long int: %ld byte(s)\n", sizeof(c));
	printf("size of a long long int: %ld byte(s)", sizeof(d));
	printf("size of a float: %ld byte(s)", sizeof(e));
	return(0);
}
