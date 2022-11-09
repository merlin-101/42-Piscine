/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:30:03 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/26 23:05:34 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int numb)
{
	long int	nbr;

	nbr = 2;
	while (nbr <= (numb / nbr))
	{
		if (numb % nbr == 0)
			return (0);
		nbr++;
	}
	return (2);
}

int	ft_find_next_prime(int nb)
{
	long int	nbr;

	nbr = 0;
	if (nb < 2)
	{
		nb = 2;
		ft_find_next_prime(nb);
	}
	if (ft_is_prime(nb) == 0)
	{
		return (ft_find_next_prime(nb + 1));
	}
	if (ft_is_prime(nb) == 2)
	{	
		nbr = nb;
		return (nbr);
	}
	return (nbr);
}

/*
int		main(void)
{
	int	n;

	n = 1;
	printf("%d", ft_find_next_prime(n));
	return (0);
}
*/