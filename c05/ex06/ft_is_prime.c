/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:29:37 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/21 12:10:17 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int 	i;

	i = 0;
	if (nb <= 1)
		return (0);
	i = 2;
	while (nb % i != 0)
		i++;
	if (i == nb)
		return(1);
	else 
		return(0);
}

int	main()
{
	printf("%d\n",ft_is_prime(11));
	return (0);
}

/*
 * solo son divisibles entre 1 y ellos mismos.
 */
