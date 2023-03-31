/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 01:38:58 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/15 16:54:44 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

int    main(void)
{
    char ori[] = "Carambolas";
    char des[] = "PATATA";

    printf("oigen antes: %s\n", ori);
    printf("destino despues: %s\n", des);
    printf("\n");

    int a = ft_strlcpy(des, ori, 13);
    
    printf("oigen: %s\n", ori);
    printf("destino: %s\n", des);
    printf("size: %d", a);


    return (0);
}
/*
 *Retorna el tamano del src.
 *size se refiere al laro del destino
 *if return value is >= dstzise, the output string has been truncate. (destination file)
 */

