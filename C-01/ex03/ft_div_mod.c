/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:16:16 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/16 10:13:40 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*
int	main(void)
{
	int	c;
	int	d;
	int	*divi;
	int	*resto;

	c = 10;
	d = 2;
	divi = &c;
	resto = &d;
	ft_div_mod(c, d, divi, resto);
	printf("%d", *divi);
	printf("\n");
	printf("%d", *resto);
}
*/