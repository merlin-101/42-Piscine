/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 00:45:38 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/15 17:24:40 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{	
	int	aux;
	int	temp;

	aux = 0;
	while (aux < (size / 2))
	{
		temp = tab[aux];
		tab[aux] = tab[size - aux - 1];
		tab[size - aux - 1] = temp;
		aux++;
	}
}

/*
int	main(void)
{
	int	tam;
	int	lol[] = {0, 1, 2, 3, 4};
	int	i;

	i = 0;
	tam = 5;
	ft_rev_int_tab(lol, tam);
	while (i < 5)
	{
		printf("%d", lol[i]);
	i++;
	}
}
*/