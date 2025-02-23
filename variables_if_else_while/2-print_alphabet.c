#include <stdio.h>

/**
 * main - Imprime el alfabeto en minúscula.
 *
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
