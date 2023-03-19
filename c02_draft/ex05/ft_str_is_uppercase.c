/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:39:20 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/14 14:29:17 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <=90)
			i++;
		else
			return (0);
	}
	return (1);
}

int	main()
{
	char	numero[] = "\n";
	int	a = ft_str_is_uppercase(numero) + '0';
	write(1, &a, 1);

	return (0);
}

