/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:46:15 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/21 18:33:39 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	f;

	i = 0;
	f = 0;
	if (to_find[f] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while ((str[i + f] == to_find[f]) && str[i + f] != '\0')
			f++;
		if (to_find[f] == '\0')
			return (str + i);
		i++;
		f = 0;
	}	
	return (0);
}

/*
int	main(void)
{
	char	string_master[] = "this is a string.";
	char	find_me[] = "string";

	printf("%s", ft_strstr(string_master, find_me));
}
*/