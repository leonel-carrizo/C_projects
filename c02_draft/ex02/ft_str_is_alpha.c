/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:46:00 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/13 12:50:13 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <=90) || (str[i] >= 97 && str[i] <= 122))
			i++;
		else if (str[i] == 32)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int	main()
{	
	char	palabra[] = "1hola";
	int	a = ft_str_is_alpha(palabra) + '0';
	write(1, &a, 1);

	return (0);
}
