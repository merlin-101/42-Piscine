/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:18:47 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/21 17:45:12 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	while (dest[i] != '\0')
		i++;
	l = 0;
	while (src[l] != '\0' && l < nb)
	{
		dest[i + l] = src[l];
	l++;
	}
	dest[i + l] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	a[] = "Hello";
	char	b[] = " World!";

	printf("%s", ft_strncat(a, b, 3));
}
*/