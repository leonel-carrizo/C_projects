/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:34:03 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/20 23:09:42 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

#include "ft_atoi.c"

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	//start in 1 because the 0! = 1.
	i = 1; 
	result = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);

}

int	main(int ac, char *av[])
{
	int	test;

	if (ac < 2 || ac > 2)
	{
		write(1, "Come on!\n", 9);
		return (1);
	}	

	test = ft_atoi(av[1]);
	printf("%d\n", ft_iterative_factorial(test));

	return (0);
}
