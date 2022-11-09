/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 23:06:48 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/16 10:15:13 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*
int	main(void)
{
	int	valor;
	int	valor2;
	int	*do_valor;
	int	*do_valor2;

	valor = 10;
	valor2 = 2;
	do_valor = &valor;
	do_valor2 = &valor2;
	ft_ultimate_div_mod(do_valor, do_valor2);
	printf("%d", *do_valor);
	printf("\n");
	printf("%d", *do_valor2);
}
*/