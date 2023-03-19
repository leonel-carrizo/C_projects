/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:33:58 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/16 16:14:18 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int 	i;
	unsigned int 	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);		
}

int    main(void)
{
	char ori[] = "PATATAS";
	char des[30] = "The People eat a lot ";
	
	printf("destino antes: %s\n", des);
	printf("\n");

	ft_strncat(des, ori, 10);

	printf("destino despues: %s", des);
	return (0);
}

