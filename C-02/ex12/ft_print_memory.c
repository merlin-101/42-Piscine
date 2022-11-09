/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:12:44 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/19 19:05:41 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar("0123456789abcdef"[str[i] / 16]);
		ft_putchar("0123456789abcdef"[str[i] % 16]);
	i++;
	}
	return (&str);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_print_memory(argv[1], argv[2]);
	}
}
