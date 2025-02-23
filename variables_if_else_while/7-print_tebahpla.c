#include <stdio.h>

/**
  * main - imprime el alphabeto al revez
  *
  * Return: 0
  */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
