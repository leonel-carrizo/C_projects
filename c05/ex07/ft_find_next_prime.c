/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:23:19 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/21 19:39:52 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//int	ft_is_prime(int nb)
//{
//	int 	i;
//
//	i = 2;
//	if (nb <= 1)
//		return (0);
//	while (i <= nb / i)
//	{
//		if (nb % i == 0)
//			return (0);
//		i++;
//	}
//	return (1);
//}
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	i = nb;
	while (!ft_is_prime(i))
			i++;
	return (i);	
}

int	main()
{
	printf("%d\n", ft_find_next_prime(10));
	return (0);
}
