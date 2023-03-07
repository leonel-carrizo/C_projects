#include <unistd.h>

void	ft_putnbr(int nb)
	{
	int a;
	a = 1;

	write(1, &a, 1);
}

int	main(void)
{

	ft_putnbr(42);
	return 0;
}