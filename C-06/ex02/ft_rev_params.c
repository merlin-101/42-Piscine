/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:59:41 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/24 22:21:41 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	int	i;
	int	k;

	k = ac - 1;
	while (k > 0)
	{	
		i = 0;
		while (av[k][i] != '\0')
		{	
			ft_putchar(av[k][i]);
			i++;
		}
		ft_putchar('\n');
		k--;
	}
	return (0);
}
