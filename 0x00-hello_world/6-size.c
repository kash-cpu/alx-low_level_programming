nclude <stdio.h>

/**
*main - entry point
*
*Return: 0 after printing the function
*/
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("size of a char is: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long is: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float is: %lu byte(s)\n", (unsigned long)sizeof(e));
	        return (0);
}
