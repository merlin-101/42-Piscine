/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:12:17 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/29 16:25:14 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int ar[], int nb)
{
	int	i;

	i = -1;
	while (++i < nb)
	{
		if (i != ar[i])
		{
			ft_putchar(',');
			ft_putchar(' ');
			break ;
		}
	}
	i = -1;
	while (++i < nb)
		ft_putchar(ar[i] + '0');
}

void	ft_checker(int ar[], int i, int nb, int a)
{
	int	n;

	if (a != nb)
	{
		n = 10 - (nb - a);
		while (i <= n)
		{
			ar[a] = i;
			ft_checker(ar, (i + 1), nb, (a + 1));
			i++;
		}
	}
	else
		ft_print(ar, nb);
}

void	ft_print_combn(int n)
{
	int	i;
	int	array[10];

	i = -1;
	while (++i <= 9)
		array[i] = 0;
	ft_checker(array, 0, n, 0);
}

/*
int	main(void)
{
	int n;

	n = 0;
	while(n <= 5)
	{
		printf("n = %d:\n", n);
		ft_print_combn(n++);
		write(1, "\n", 1);
	}
	n = 9;
	printf("n = %d:\n", n);
	ft_print_combn(n++);
	write(1, "\n", 1);
	return (0);
}
*/