/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:34:19 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/23 11:38:55 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char 	*new;
	int	i;

	new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

int	main(int ac, char *av[])
{
	char	*mine;
	char	*theirs;

	if (ac == 2)
	{
		mine = ft_strdup(av[1]);
		theirs = strdup(av[1]);

		printf("%s\n %s\n",mine, theirs);
	}
	return (0);
}
