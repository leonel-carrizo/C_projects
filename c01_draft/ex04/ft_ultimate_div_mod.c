/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:51:00 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/09 17:38:01 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	temp_a;
	int 	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}

int	main(void)
{

	int	a = 16;
	int	b = 5;

	ft_ultimate_div_mod(&a, &b);

	write(1, "I'm the result in a:\n", 22);
	ft_putnbr(a);
	write(1, "\n", 1);
	write(1, "I'm the remainder in b:\n", 24);
	ft_putnbr(b);
	return (0);
}
