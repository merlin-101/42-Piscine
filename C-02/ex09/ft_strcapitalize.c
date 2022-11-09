/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:28:37 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/17 19:55:25 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_mini(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
	i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	checker;

	i = 0;
	checker = 1;
	ft_mini(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (checker == 1)
			{
				str[i] -= 32;
				checker -= 1;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			checker = 0;
		else
			checker = 1;
	i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(string);
	printf("%s", ft_strcapitalize(string));
}
*/