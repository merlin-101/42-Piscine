/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 21:26:44 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/13 22:15:31 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int	main(void)
{
	int	test1;
	int	test2;
	int	*f;
	int	*d;

	test1 = 24;
	test2 = 42;
	f = &test1;
	d = &test2;
	ft_swap(f, d);
	printf("%d", *f);
	printf("\n");
	printf("%d", *d);
}
*/