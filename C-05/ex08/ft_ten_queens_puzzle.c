/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:06:03 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/27 02:51:20 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	combiner_machine(int array[], int storage[], int start, int fini, int index, int n)
{
	int	a;
	int i;
	int	counter;

	counter = 0;
	if (index == n)
	{
		a = 0;
		while (a < n)
		{
			storage[a] = storage[a] + 48;
			write(1, &storage[a], 1);
			a++;
		}
		write(1, "\n", 1);
		counter += 1;
		return;
	}
	i = start;
	while ((i <= fini) && ((fini - i + 1) >= (n - index)))
	{
		storage[index] = array[i];
		combiner_machine(array, storage, i + 1, fini, index + 1, n);
		i++;
	}
}

void	temp_array(int array[], int n, int size)
{
	int	storage[size];
	combiner_machine(array, storage, 0, n - 1, 0, n);
}

int	ft_ten_queens_puzzle(void)
{
	int	array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size;
	int	n;

	size = 10;
	n = 10;
	temp_array(array, n, size);
	return (0);
}

/*
int	main(void)
{
	int solutions;

	solutions = ft_ten_queens_puzzle();
	if (solutions == 724)
		printf("> OK, result: %d.\n", solutions);
	else
		printf("> KO, expected: 724, got: %d\n", solutions);
	return (0);
}
*/