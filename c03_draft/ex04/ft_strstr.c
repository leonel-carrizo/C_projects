/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:58:05 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/16 17:29:24 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

int	main(void)
{
	char word_one[10] = "Helloooo";
	char word_two[10] = "oooo";

	printf("%s \n", ft_strstr(word_one, word_two));
	printf("%s", strstr(word_one, word_two));

	return (0);
}
/*
 Busca la subcadena 'to_find' dentro de 'str'
 Si la consigue en la primera posicion o las cadenas son iguales devuelve 'str.
 si son diferentes, retorna NULL.
 Distingue de mayusculas.
 */

