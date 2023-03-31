/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 06:31:48 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/08 17:57:52 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_chart(char c)
{
	write(1, &c, 1);
}

void	print_group(char group[], int n_lenght, int lenght_max)
{
	int	i;

	i = 0;
	if (group[0] == lenght_max)
	{
		while (i < n_lenght)
			print_chart(group[i++]);
		return ;
	}
	while (i < n_lenght)
		print_chart(group[i++]);
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	group[10];
	char	lenght_max[10];
	int		index;
	int		value;
	int		j;

	j = 0;
	while (j < n)
	{
		group[j] = j + 48;
		lenght_max[j] = (10 - n) + (j + 48);
		j++;
	}
	print_group(group, n, lenght_max[0]);
	while (group[0] != lenght_max[0])
	{
		index = n -1;
		while (group[index] == lenght_max[index])
			--index;
		value = ++(group[index]);
		while (index < n - 1)
			group [++index] = ++value;
		print_group(group, n, lenght_max[0]);
	}
}


 int		main(void)
 {	
 	ft_print_combn(1);
 	ft_print_combn(2);
 	ft_print_combn(3);
 	ft_print_combn(4);

}
