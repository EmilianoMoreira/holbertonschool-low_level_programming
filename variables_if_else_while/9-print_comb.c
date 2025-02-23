#include <stdio.h>

/**
  * main - imprime una serie de numeros con commas
  *
  * Return: 0
  */
int main(void)
{
	int letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);

		if (letter != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
