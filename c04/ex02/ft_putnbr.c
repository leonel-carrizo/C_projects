/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:49:20 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/20 19:54:24 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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

int	main(void)
{
	ft_putnbr(INT_MIN);
	printf("\n");
	ft_putnbr(4294967295);
	printf("\n");
	ft_putnbr(-8);
	printf("\n");
	ft_putnbr(INT_MAX);

	return (0);
}
