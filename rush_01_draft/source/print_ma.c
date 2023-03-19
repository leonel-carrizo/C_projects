/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ma.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:06:31 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/11 21:06:35 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_putchar(char c);
void ft_putnbr(int nb);

void	print_ma(int ma[4][4])
{
	int 	i;
	int	j;

	i = 0;
	while(i < 4)
	{
		j = 0;
		while(j < 4)
		{
			ft_putnbr(ma[i][j]);
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
