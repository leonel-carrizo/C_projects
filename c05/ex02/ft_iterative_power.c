/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:15:24 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/21 00:53:55 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= result;
		power--;
	}
	return (nb);
}

int	main()
{
	printf("%d\n", ft_iterative_power(0, 0));

	return (0);
}

/*
 *Todo numero negativo con exponente 0 es = 1;
 *Todo numero con exponente 0 es = 1;
 *Si la base es 0 y el exponente es != 0, = 0;
 *Si el exponente es negativo, es = 0;
 *Todo numero elevado a 1 es la misma base. 
 */
