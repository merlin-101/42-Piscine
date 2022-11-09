/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 03:21:01 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/28 18:58:04 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	if (min >= max)
		return (NULL);
	dest = ((int *)malloc(sizeof(int) * (max - min)));
	if (!dest)
		return (NULL);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}

/*
int		main(void)
{
	int	i;
	int	*array;
	int	max;
	int	min;

	max = 10;
	min = -10;
	i = 0;
	array = ft_range(min, max);
	while (min < max)
	{
		printf("%d\n", array[i]);
		i++;
		min++;
	}
}
*/