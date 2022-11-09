/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:57:43 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/20 22:26:13 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		if (s1[i] < s2[i])
		{
			return (-1);
		}
	i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	string1[] = "this is a string";
	char 	string2[] = "tais is a strinz";

	ft_strncmp(string1, string2, 2);
	printf("%d", ft_strncmp(string1, string2, 2));
	return (0);
}
*/