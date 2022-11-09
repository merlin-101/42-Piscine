/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:02:50 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/14 02:52:05 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(int nb)
{
	write(1, &nb, 1);
}

void	ft_putnumb(int a)
{	
	putchar(a / 10 + '0');
	putchar(a % 10 + '0');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{	
			ft_putnumb(a);
			write(1, " ", 1);
			ft_putnumb(b);
			if (a < 98 || b < 99)
			{
				write(1, ", ", 2);
			}
		b++;
		}
	a++;
	}
}

void	ft_print_comb2(void)
{
	ft_print_comb();
}
