/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:49:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/21 01:00:51 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 1)
		return (nb * ft_recursive_power(nb, power -1 ));
	return(0);
}

int	main()
{
	printf("%d\n", ft_recursive_power(4, 2));

	return (0);
}
