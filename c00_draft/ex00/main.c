#include <unistd.h>

void ft_putchar(char c);

int		ft_nputchar(char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i = i + 1;
	}
	return (0);
}

int	main(void)
{
	ft_nputchar('#', 10);
	ft_putchar('\n');
	return (0);
}
