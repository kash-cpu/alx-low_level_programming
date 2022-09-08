#include <stdio>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char is: %ld byte(s)\n", sizeof(c));
	printf("size of an int is: %ld byte(s)\n", sizeof(i));
	printf("size of a long is: %ld byte(s)\n", sizeof(li));
	printf("size of a long long int is: %ld byte(s)\n", sizeof(lli));
	printf("size of a float is: %ld byte(s)\n", sizeof(f));
	return (0);
}
