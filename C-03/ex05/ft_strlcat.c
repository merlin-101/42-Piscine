/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:33:49 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/22 17:28:39 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	get_lenght(char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;
	unsigned int	lengh_d;
	unsigned int	lengh_s;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
		i++;
	lengh_d = i;
	lengh_s = get_lenght(src);
	if (size == 0 || size <= lengh_d)
	{
		return (lengh_s + size);
	}
	while ((src[l] != '\0') && (l < (size - lengh_d - 1)))
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (lengh_d + lengh_s);
}

/*
int	main(void)
{
	char	a[] = "Hello ";
	char	b[] = "World!";

	printf("%i\n", ft_strlcat(a, b, 11));
}
*/