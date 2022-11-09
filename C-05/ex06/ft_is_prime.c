/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 04:35:19 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/27 02:51:02 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	nbr;

	nbr = 2;
	if (nb < 2)
		return (0);
	while (nbr <= (nb / 2))
	{
		if (nb % nbr == 0)
			return (0);
		nbr++;
	}
	return (1);
}
