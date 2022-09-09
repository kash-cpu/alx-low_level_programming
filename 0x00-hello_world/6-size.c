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

	printf("the size of a char is: %ld byte(s)\n", sizeof(a));
	printf("the size of an int is: %ld byte(s)\n", sizeof(b));
	printf("the size of a long is: %ld byte(s)\n", sizeof(c));
	printf("the size of a long long is: %ld byte(s)", sizeof(d));
	printf("the size of a float is: %ld byte(s)", sizeof(e));
	return(0);
}
