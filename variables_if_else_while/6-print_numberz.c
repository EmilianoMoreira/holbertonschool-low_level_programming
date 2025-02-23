#include <stdio.h>

/**
  * main - imprime numeros de 0 a 9
  *
  * Return: 0
  */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
