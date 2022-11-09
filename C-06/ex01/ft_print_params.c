/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:11:09 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/22 22:25:53 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	k;

	k = 1;
	while (k < ac)
	{	
		i = 0;
		while (av[k][i] != '\0')
		{	
			ft_putchar(av[k][i]);
			i++;
		}
		ft_putchar('\n');
		k++;
	}
	return (0);
}
