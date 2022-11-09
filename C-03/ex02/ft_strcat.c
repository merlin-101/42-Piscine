/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:26:45 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/21 17:18:21 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	while (dest[i] != '\0')
		i++;
	l = 0;
	while (src[l] != '\0')
	{
		dest[i] = src[l];
	i++;
	l++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = " World!";

	printf("%s", ft_strcat(a, b));
}
*/