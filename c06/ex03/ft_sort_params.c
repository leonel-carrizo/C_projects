/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:59:20 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/22 19:37:03 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

void	ft_swap(char *a[], char *b[])
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(char *av[], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				ft_swap(&av[j], &av[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	k;

	k = 1;
	ft_sort_params(av + 1, ac - 1);
	while (k < ac)
	{	
		ft_putstr(av[k]);
		ft_putstr("\n");
		k++;
	}
	return (0);
}
