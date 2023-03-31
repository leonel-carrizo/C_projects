/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:23:36 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/09 14:03:55 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	fifty;
	int	thousand;
	
	fifty = 50;
	thousand = 1000;
	
	ft_swap(&fifty, &thousand);
	
	write(1, "I'm Thousand:\n", 14);
	ft_putnbr(thousand);
	write(1, "\n", 1);
	write(1, "\nI'm Fifty:\n", 12);
	ft_putnbr(fifty);
	write(1, "\n", 1);
	return (0);
}

