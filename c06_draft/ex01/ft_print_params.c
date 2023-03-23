/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:19:24 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/22 13:21:16 by lcarrizo         ###   ########.fr       */
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

	j = 1;
	while (j < ac)
	{	ft_putstr(av[j]);
		ft_putstr("\n");
		j++;
	}
	return (0);
}
