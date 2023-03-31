#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void	fizzbuzz1(const int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		printf("\n");
		i++;
	}
}

int	main(int ac, char **av)
{
	int	n;

	if (ac != 2)
	{
		printf("Usage: %s <# of rounds>\n", av[0]);
		return (EXIT_FAILURE);
	}
	n = atoi(av[1]);
	fizzbuzz1(n);
	return (0);
}
