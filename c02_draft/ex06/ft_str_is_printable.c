/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:46:18 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/15 15:04:59 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	char	string[] = "hola q";
	int	a = ft_str_is_printable(string) + '0';
	write(1, &a, 1);

	return (0);
}

