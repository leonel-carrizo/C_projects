/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:12:34 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/23 13:38:17 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	len;
	int	i;
	
	len = max - min;
	if (min >= max)
		return (NULL);
	
	result = (int *)malloc(sizeof(int) * len);
	if (result == NULL)
		return (NULL);

	i = 0;
	while (*result)
	{
		result[i] = min + i;
	//	min++;
		i++;
	}
	return (result);
}

int	main(int ac, char *av[])
{
	int	b;
	int	a;
	int 	*tab;
	int	i;
	int	len;
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);

		tab = ft_range(a , b);	
		len = b - a;
		i = 0;
		while (i < len)
		{
			printf("%d, ", tab[i]);
			i++;
		}
	}
	return (0);
}
