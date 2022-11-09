/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:45:08 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/20 12:21:54 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] -= 32;
		}
	i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	string[] = "AAAAAAAAAAaaaaaaaaassssssssSSSSSSSsSsSsSsSs";

	ft_strupcase(string);
	printf("%s", ft_strupcase(string));
}
*/