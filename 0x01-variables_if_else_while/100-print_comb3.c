#include <stdio.h>
/**
 * main -  a program that prints possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int num1;
	int num2 = 0;

	while (num2 < 10)
	{
		num1 = 0;
		while (num1 < 10)
		{
			if (num2 != num1 && num2 < num1)
			{
				putchar('0' + num2);
				putchar('0' + num1);

				if (num1 + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			num1++;
		}
		num2++;
	}
	putchar('\n');
	return (0);
}
