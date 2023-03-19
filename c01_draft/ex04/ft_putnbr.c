/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:29:37 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/09 02:29:43 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		number[10];
	int		values;
	short	i;

	values = nb;
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb < 0)
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
	while (i >= 0)
	{
		write(1, &number[--i], 1);
	}
}
