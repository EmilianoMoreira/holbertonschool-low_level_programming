#include <stdio.h>

/**
  * main - imprime los numeros del 0 a 9
  *
  * Return: 0
  */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
