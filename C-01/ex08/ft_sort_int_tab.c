/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:25:45 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/16 12:37:27 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	temp2;

	aux = 0;
	while (aux < size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				temp2 = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp2;
			}
			i++;
		}
		aux++;
	}
}

/*
int	main(void)
{
	int	array[] = {2, -1, 4, 7, 9, 1000, 98, -987654};
	int	tam;
	int	i;

	tam = 8;
	i = 0;
	ft_sort_int_tab(array, tam);
	while (i < 8)
	{
		printf("%d", array[i]);
		printf("\n");
		i++;
	}
	return (0);
}
*/