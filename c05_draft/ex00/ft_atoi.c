/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:19:17 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/20 21:15:57 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include <unistd.h>
#include <stdlib.h> //DELETE !!!!

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

//int	main(int ac, char **av)
//{
//	int mine;
//	int theirs;
//	if (ac == 2)
//	{
//		mine = ft_atoi(av[1]);
//		theirs = atoi(av[1]);
//		printf("el mio: %d | el standar: %d \n", mine, theirs);
//	}
//	return (0);
//}
