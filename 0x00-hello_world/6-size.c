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

	printf("the size of a char is: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("the size of an int is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("the size of a long is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("the size of a long long is: %lu byte(s)", (unsigned long)sizeof(d));
	printf("the size of a float is: %lu byte(s)", (unsigned long)sizeof(e));
		return(0);
}
