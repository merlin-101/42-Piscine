/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:37:50 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/14 02:57:05 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	checker(int nb)
{	
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		checker(-nb);
	}
	else if (nb > 9)
	{
		checker(nb / 10);
		checker(nb % 10);
	}
	else if (nb >= 0 && nb <= 9)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	else
	{
		write(1, "", 1);
	}
}

void	if_minimaster(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		write(1, "147483648", 9);
	}
	else
	{
		checker(nb);
	}
}

void	ft_putnbr(int nb)
{	
	if (nb >= INT_MIN && nb <= INT_MAX)
	{	
		if_minimaster(nb);
	}
}

/*
int	main(void)
{
	ft_putnbr(100000000);
}
*/