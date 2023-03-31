/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:08:56 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/13 18:14:16 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strlowcase(char *str)
{
	int	i;
	
	i = 0;
	while(*(str + i))
	{
		if (*(str + i) >= 65 && *(str + i) <= 90)
			*(str + i) += 32;
		
		++i;
	}
	return (str);
}

int	main()
{
	char	string[] = "AAAAAlllOOoeeeiii";
	
	ft_strlowcase(string);
	
	int i = 0;
	while(string[i] != '\0')
	{	ft_putchar(string[i]);
		i++;}
	return (0);
}

