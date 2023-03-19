/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:16:46 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/15 12:26:36 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		++j;
	while (src[i] != '\0')
 	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);		
}

int    main(void)
{
	char ori[] = "PATATAS";
	char des[100] = "The People eat a lot ";
	
	printf("destino antes: %s\n", des);
	printf("\n");

	ft_strcat(des, ori);

	printf("destino despues: %s", des);
	return (0);
}

/*
 *Agrega el SRC al DEST.
 *Sobrescribe la terminacion '\0' en el DEST
 *Agrega NULL al final del nuevo string
 *El destino debe tener suficiente espacio, sino tiene comportamiento impredecible. Como overruns.
 */
