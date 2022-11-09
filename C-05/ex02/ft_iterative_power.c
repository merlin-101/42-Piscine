/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 02:15:06 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/27 04:38:37 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	long int	nbr;

	nbr = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- != 0)
		nbr = nbr * nb;
	return (nbr);
}

/*
void ft_iterative_power_test(int nb, int power)
{
	int res;

	res = ft_iterative_power(nb, power);
	printf(" nb = %d, power = %d, result: %d\n", nb, power, res);
}

int	main(void)
{
	int nb;
	int power;

	printf("[1] Potencias negativas(deve retornar 0)\n");
	nb = -4;
	while (nb <= 4)
	{
		power = -4;
		while (power < 0)
		{
			ft_iterative_power_test(nb, power);
			power++;
		}
		nb++;
	}
	printf("[2] Potencias 0(deve retornar 1)\n");
	nb = -4;
	power = 0;
	while (nb <= 4)
	{
		ft_iterative_power_test(nb, power);
		nb++;
	}
	printf("[3] Potencias positivas(deve retornar o numero elevado a potencia)\n");
	nb = -4;
	while (nb <= 4)
	{
		power = 1;
		while (power <= 4)
		{
			ft_iterative_power_test(nb, power);
			power++;
		}
		nb++;
	}
	return (0);
}
*/