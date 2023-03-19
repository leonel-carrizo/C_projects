/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:48:48 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/12 15:06:18 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{	
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int 	j;
	int	a;

	i = 0;
	while (i <= size - 1)
	{
		j = 0;
		while(j <= size - 1 - i)
		{


			if (tab[j] > tab[j+1])
			{
				a = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = a;
				// ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;

		}
		i++;
	}

}

int main(void)
{
	int	tamano;
	tamano = 12;
	int	array[12] = {1, 2, 9,4,3,2,6,5,7,0,1, 8};
	int 	i;

	ft_sort_int_tab(array, tamano);

	i = 0;
	while(i < tamano)
	{
		printf("%i", array[i]);
		i++;
	}

	return 0;
}
