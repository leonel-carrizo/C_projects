/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:02:25 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/10 13:03:30 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include <unistd.h>
#include<unistd.h>
#include<stdio.h>
void    ft_putchar(int c)
{
    write(1, &c, 1);
}

void    ft_rev_int_tab(int *tab, int size)
{

    int    i;
    int    a;  

    a = 0;
    i = 0;
        while (i < size / 2)
        {
            // ft_swap(&tab[i], &tab[i -1 -i]);
        a = tab[i];
        tab[i] = tab[size -1 -i];
        tab[size -1 -i] = a;
        i++;
    }
}

int    main(void)
{
    int     tamano;
    tamano = 10;
    int    array[10] = {1,2,3,4,5,6,7,8,9,0};

    ft_rev_int_tab(array, tamano);

    int i = 0;
    while(i < tamano)
    {
        ft_putchar(array[i] + '0');
        // printf("%d", array[i]);
        i++;
    }


    return 0;
}
