/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:31:11 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/22 14:11:21 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	 main(int ac, char **av)
{
	int j;

	j = ac;
	while (j > 1)
	{	ft_putstr(av[--j]);
		ft_putstr("\n");
	}
	return (0);
}

