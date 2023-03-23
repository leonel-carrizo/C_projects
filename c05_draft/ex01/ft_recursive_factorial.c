/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:58:27 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/20 23:11:49 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main()
{
	printf("%d\n", ft_recursive_factorial(13));

	return (0);
}

/*
 La recursividad es un concepto importante en la programación en el cual una función se llama a sí misma para resolver un problema. 
 La recursividad es especialmente útil para resolver problemas que se pueden descomponer en subproblemas más pequeños e idénticos al problema original.

Un ejemplo clásico de una función recursiva es la función que calcula el factorial de un número. 
El factorial de un número n (representado por n!) es el producto de todos los números enteros desde 1 hasta n. 
Por ejemplo, 5! = 5 x 4 x 3 x 2 x 1 = 120.

En C, una función recursiva para calcular el factorial de un número puede ser escrita de la siguiente manera:
c++

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
Esta función tiene un caso base y un caso recursivo. 
El caso base es cuando n es igual a 0, en cuyo caso el factorial de n es 1. 
El caso recursivo es cuando n es mayor que 0, en cuyo caso el factorial de n se calcula multiplicando n por el factorial de n-1.

El proceso recursivo comienza con la llamada a la función factorial(n) con un valor de n. Si n es igual a 0, la función devuelve 1. 
De lo contrario, la función se llama a sí misma con un valor de n-1 y multiplica el resultado por n. 
Esta llamada recursiva se repite hasta que n es igual a 0.

Por ejemplo, si llamamos a la función factorial(5), el proceso recursivo sería el siguiente:

scss
Copy code
factorial(5) = 5 * factorial(4)
             = 5 * 4 * factorial(3)
             = 5 * 4 * 3 * factorial(2)
             = 5 * 4 * 3 * 2 * factorial(1)
             = 5 * 4 * 3 * 2 * 1 * factorial(0)
             = 5 * 4 * 3 * 2 * 1 * 1
             = 120
Es importante tener en cuenta que la recursividad puede tener un costo alto en términos de uso de memoria y tiempo de ejecución, 
especialmente para problemas grandes o para funciones recursivas que se llaman a sí mismas muchas veces. 
Por lo tanto, es importante usar la recursividad de manera adecuada y asegurarse de que el problema se pueda resolver de manera eficiente 
y sin causar problemas de desbordamiento de pila o agotamiento de recursos
*/
