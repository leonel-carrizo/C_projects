/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:48:25 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/15 18:54:03 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		new_word;

	i = 0;
	new_word = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (new_word == 1)
				str[i] -= 32;
			    new_word = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			new_word = 0;
		else
			new_word = 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(string);
	printf("%s", string);

	return (0);
}

/*El error en el código es que la función ft_strcapitalize no capitaliza la primera letra de cada palabra después de un carácter de puntuación. La condición del primer if dentro del bucle while debería comprobar si el carácter anterior es un carácter de puntuación o un espacio en blanco antes de capitalizar la letra actual.

Además, la función no maneja correctamente las letras mayúsculas que ya están presentes en la cadena de entrada.i
Si una letra mayúscula ya está en la cadena de entrada, la función la convierte a minúscula en lugar de dejarla i
en mayúscula.*/
