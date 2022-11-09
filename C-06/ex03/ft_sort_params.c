/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:22:20 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/26 01:39:02 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_compare_str(char *str1, char *str2)
{
	while (*str1 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int	main(int ac, char *av[])
{
	int	i;
	int	k;

	k = 1;
	while (k < ac - 1)
	{	
		i = 1;
		while (i < ac -1)
		{	
			if ((ft_compare_str(av[i], av[i + 1])) > 0)
			{
				ft_swap(&av[i], &av[i + 1]);
			}
			i++;
		}
		k++;
	}
	i = 1;
	while (i < ac)
	{
		ft_printstr(av[i]);
		ft_putchar('\n');
		i++;
	}	
	return (0);
}
