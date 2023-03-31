/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:08:34 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/16 18:19:32 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
//	while (*s1 == *s2 && *s1 && n)
//	{
//		++s1;
//		++s2;
//		--n;
//	}
//	return( *s1 - *s2);

	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (*(s1 + i) && (i < n - 1))
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (*(s1 + i) - *(s2 + i));

}


int	main(void)
{
	int n = 5;
	char str1[] = "hello";
	char str2[] = "Hello";

	int a = ft_strncmp(str1, str2, n);

	printf("%d", a);

	return (0);
}

