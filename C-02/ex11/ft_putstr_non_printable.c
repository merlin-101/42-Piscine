/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:35:21 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/20 20:22:05 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_print(unsigned char d)
{
	if (d >= 32 && d <= 126)
	{
		return (1);
	}
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	a;
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (ft_char_is_print(a) == 1)
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[a / 16]);
			ft_putchar("0123456789abcdef"[a % 16]);
		}
		i++;
	}
}

/*
int	main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C', '\0'};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}
*/
/*
int	main(void)
{
	char	string[] = "Coucou\ntu va\ns bien ?";

	ft_putstr_non_printable(string);
}
*/