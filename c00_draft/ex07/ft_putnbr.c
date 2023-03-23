#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb)
{    
	long	nbr;
	char	num[10];
	short	i;
	
	nbr = nb;

	if (0 == nb)
		write(1, "0", 1);
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	i = 0;
	while (nbr)
	{
		num[i] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	while (i > 0)
		write(1, &num[--i], 1);

}

// ##########################

int	main(void)
{
	ft_putnbr(INT_MIN);
	write(1	,"\n" , 1);

	return (0);
}


/*Create a function that displays the number entered as a parameter. The function
has to be able to display all possible valuess within an int type variable.
• Here’s how it should be prototyped :
void ft_putnbr(int nb)

• For example:
◦ ft_putnbr(42) displays "42"*/
