/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 08:37:49 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/06 11:38:06 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_digit(short digit)
{
	int	number;

	if (digit < 10)
	{
		number = digit + 48;
		write(1, "0", 1);
		write(1, &number, 1);
	}
	else
	{
		number = digit / 10 + 48;
		write(1, &number, 1);
		number = digit % 10 + 48;
		write(1, &number, 1);
	}
}

void	ft_print_comb2(void)
{
	short	group[4];

	group[0] = 0;
	while (group[0] <= 99)
	{
		group[1] = group[0] + 1;
		while (group[1] <= 99)
		{
			print_digit(group[0]);
			write(1, " ", 1);
			print_digit(group[1]);
			if ((group[0] == 98 && group[1] == 99))
			{
				break ;
			}
			else
			{
				write(1, ", ", 2);
			}
			group[1]++;
		}
		group[0]++;
	}
}
