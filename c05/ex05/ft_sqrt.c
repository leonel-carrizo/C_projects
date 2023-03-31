/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:49:08 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/21 10:49:41 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i < nb && i <= 464340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

int	main()
{
	printf("%d", ft_sqrt(48));
	return (0);
}
/*
 * numero que multiplicado por si mismo sea igual a nb,
 * es decir, un numero que elevado al cuadrado sea nb.
 * ej.  la raiz cuadrada de 25 --> 5^5 = 25.
 */
