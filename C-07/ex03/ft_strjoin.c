/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 06:39:49 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/28 18:17:38 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	get_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	letter_counter(char **strs, int size)
{
	int	letters;
	int	i;

	letters = 0;
	i = -1;
	while ((++i < size) && (strs[i] != 0))
		letters += get_lenght(strs[i]);
	return (letters);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_words;
	int		i;
	char	*str;

	if (size == 0)
		return (malloc(1));
	size_words = letter_counter(strs, size);
	str = (char *)malloc(size_words + (get_lenght(sep) * (size - 1)) + 1);
	if (str == 0)
		return (0);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i == (size - 1))
			break ;
		ft_strcat(str, sep);
		i++;
	}
	str[size_words + (get_lenght(sep) * (size - 1))] = '\0';
	return (str);
}

/*
int		main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 3)
	{
		strs[offset] = "abc";
		offset++;
	}
	res_str = ft_strjoin(3, strs, ", ");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}
*/