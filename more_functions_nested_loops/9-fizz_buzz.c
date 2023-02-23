#include <stdio.h>
/**
 * main - FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int mul3, b, mul5, mul15;

	for (b = 1; b <= 100; b++)
{
	mul3 = b % 3;
	mul5 = b % 5;
	mul15 = b % 15;
	if (mul15 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (mul5 == 0 && b != 100)
	{
		printf("Buzz ");
	}
	else if (b == 100)
	{
		printf("Buzz");
		printf("\n");
	}
	else if (mul3 == 0)
	{
		printf("Fizz ");
	}
	else
	{
		printf("%d ", b);
}
}
return (0);
}
