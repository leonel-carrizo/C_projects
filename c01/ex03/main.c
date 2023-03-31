/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:18:00 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/09 15:18:05 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	result; 
	int	remainder;
	
	a = 10;
	b = 3;

	//calling the function.
	ft_div_mod(a, b, &result, &remainder);
	
	//showeing the values saves in the address.
	write(1, "I'm the Result:\n", 16);
	ft_putnbr(result);
	//just new line
	write(1, "\n", 1);

	write(1, "I'm the Remainder:\n", 19);
	ft_putnbr(remainder);

	return(0);
}
