/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:42:16 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/16 09:56:18 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}


int	main(void)
{
	char num[] = "caracas";

	printf("%d \n", ft_strlen(num));

	return (0);
}

/*
 * Recibe un string y mide el largo
 * devuelve el numero de caracteres.
 */
