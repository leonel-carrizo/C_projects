/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:27:42 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/14 14:19:39 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <=122)
			i++;
			return (0);
	}
	return (1);
}

int	main()
{	
	char	numero[] = {"\\/"};
	int	a = ft_str_is_lowercase(numero) + '0';
	write(1, &a, 1);

	return (0);
}

