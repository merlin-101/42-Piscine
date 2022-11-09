/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:16:56 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/25 21:45:43 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	counter;

	nbr = 0;
	counter = 1;
	i = 0;
	if (str[i] != '\0' && str[i] <= '9')
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] == 45 || str[i] == 43)
		{
			if (str[i] == 45)
				counter = counter * -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			nbr = (10 * nbr) + (str[i] - 48);
			i++;
		}
	i++;
	}
	return (counter * nbr);
}
