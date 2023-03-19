/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:59:12 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/15 01:25:57 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <=57)
			i++;
		else
			return (0);
	}
	return (1);
}

int	main()
{	
	char	numero[] = "12123";
	int	a = ft_str_is_numeric(numero) + '0';
	write(1, &a, 1);

	return (0);
}
