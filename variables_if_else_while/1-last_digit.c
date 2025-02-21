#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Imprime el último dígito de un número gendo aleatoriamente
 * y si es mayor que 5, menor que 6 o 0.
 *        
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("El último dígito de %d es %d es mayor que\n";
                        n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("El último dígito de %d es %d y es menoque 6 y  0\n",
			n, n % 10);
	}
	else
	{
		printf("El último dígito de %d es %d y es\n",
			n, n % 10);
	}

	return (0);

}
