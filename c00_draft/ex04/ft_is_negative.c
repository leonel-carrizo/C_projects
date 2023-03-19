/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:18:23 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/03 09:23:04 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	int	neg;
	int	pos;

	neg = 78;
	pos = 80;
	if (n < 0)
		write(1, &neg, 1);
	else if (n >= 1 || n == '\0')
		write(1, &pos, 1);
}
