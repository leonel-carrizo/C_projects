/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 02:21:01 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/15 19:02:49 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int np)
{
	char *hex;

	hex = "0123456789abcdef";
	if (np >= 16)
	{
		print_hex(np / 16);
		print_hex(np % 16);
	}
	else
		ft_putchar(hex[np]);
}

//recursivamente
void	ft_putstr_with_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 33 && str[i] <= 126))
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			print_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	string[] = {"Hola\r como estas\n"};
	
	ft_putstr_with_non_printable(string);
	
//	int i = 0;
//	while(i < 19)
//	{	ft_putchar(string[i]);
//		i++;}
//	return (0);
}

