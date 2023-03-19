/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:20:10 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/16 14:17:17 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//int	ft_strcmp(char *s1, char *s2)
//{
//	int	i;
//	i = 0;
//	while ((s1[i] != '\0') && (s2[i] != '\0') && s1[i] == s2[i]) 
//	{
//		i++;
//	}
//	return( s1[i] - s2[i]);	
//}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		++s1;
		++s2;
	}
	return( *s1 - *s2);
}

int	main(void)
{
	char str1[] = "hello";
	char str2[] = "hello";

	int a = (ft_strcmp(str1, str2));

	printf("%d", a);

	return (0);
}

/* 
 * When strings are iqual return 0
 * when str1 is greater (ASCII) that str2 return > 0 (positive)
 * when str1 is lower (ASCII) than str2 return < 0 (negative)
 */
