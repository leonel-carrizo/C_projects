/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:29:09 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/13 16:56:15 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strupcase(char *str)
{
	int	i;
	
	i = 0;
	while(*(str + i))
	{
		if (*(str + i) >= 97 && *(str + 1) <= 122)
			*(str + i) -= 32;
		
		++i;
	}
	return (str);
}

int	main()
{
	char	string[] = "AAAAAlllOOoeeeiii";
	
	ft_strupcase(string);
	
	int i = 0;
	while(string[i] != '\0')
	{	ft_putchar(string[i]);
		i++;}
	return (0);
}

