/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:21:03 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/20 12:24:14 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	string[] = "SHISUADHIUDSHFDHSFJIOJTOPJDAS[FJOSAFJI";

	ft_strlowcase(string);
	printf("%s", ft_strlowcase(string));
}
*/