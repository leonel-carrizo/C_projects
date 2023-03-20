#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb)
{    
	char	number[10];
	long	values;
	short	i;
    
	values = nb;
	if (nb == 0)
  	{
		write(1, "0", 1);
	}
  	else if(nb < 0)
	{
		values *= -1;
		write(1, "-", 1);
	}

	i = 0;
	while (values)
	{
		number[i] = (values % 10) + 48;
		values /= 10;
		i++;
	}
	while ( i >= 0)
	{
		write(1, &number[--i], 1);
		
	}
}

// ##########################

int	main(void)
{
	ft_putnbr(INT_MAX);
	write(1	,"\n" , 1);

	return (0);
}


/*Create a function that displays the number entered as a parameter. The function
has to be able to display all possible valuess within an int type variable.
• Here’s how it should be prototyped :
void ft_putnbr(int nb)

• For example:
◦ ft_putnbr(42) displays "42"*/
