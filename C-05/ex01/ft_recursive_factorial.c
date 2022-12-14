/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 02:02:42 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/27 02:46:20 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	long int	nbr;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		return (nbr = (nb * ft_recursive_factorial(nb - 1)));
	}
}

/*
int	main(void)
{
	int nb;
	int res;

	nb = -5;
	while (nb <= 10)
	{
		res = ft_recursive_factorial(nb);
		printf("> n = %d, n! = %d\n", nb, res);
		nb++;
	}
	return (0);
}
*/