/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_fr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:10:10 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/08 16:10:16 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_ft(int *nbr)
{
	*nbr = 2147483647;

}


int	main()
{
	int	x;

	x = 2000;

	//write(1, &x, 1);
	// printf("X antes de asignar la direccion %d\n", x);

	ft_ft(&x);
	
	// ft_putnbr(x);
	printf("X cambiado por el puntero %d\n", x);


	return (0);
}
