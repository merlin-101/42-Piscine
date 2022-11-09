/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:02:46 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/29 20:15:45 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	conditions_base(char *c)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	if (c[0] == '\0' || c[1] == '\0')
		return (0);
	while (c[i] != '\0')
	{
		if (c[i] <= 32 || c[i] == 127 || c[i] == 43 || c[i] == 45)
			return (0);
		l = i + 1;
		while (c[l] != '\0')
		{
			if (c[i] == c[l])
				return (0);
			l++;
		}
		i++;
	}
	return (i);
}

int	get_char(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	count = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		nbr;
	int		nbr2;
	int		beg;

	nbr = 0;
	i = 0;
	beg = conditions_base(base);
	if (beg >= 2)
	{
		sign = whitespaces(str, &i);
		nbr2 = get_char(str[i], base);
		while (nbr2 != -1)
		{
			nbr = (nbr * beg) + nbr2;
			i++;
			nbr2 = get_char(str[i], base);
		}
		return (nbr *= sign);
	}
	return (0);
}
