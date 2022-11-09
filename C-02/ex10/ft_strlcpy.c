/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnarciso <rnarciso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:55:58 by rnarciso          #+#    #+#             */
/*   Updated: 2022/09/20 15:46:58 by rnarciso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	get_lenght(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	true_size;

	true_size = get_lenght(src);
	i = 0;
	if (size != 0)
	{
		while ((src[i] != '\0') && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (true_size);
}

/*
int	main(void)
{
	int 	src_size;
	char 	*src;
	char 	*dest;

	src = calloc(11, sizeof(char));
	dest = calloc(8, sizeof(char));
	src = "alo galera";
	src_size = ft_strlcpy(dest, src, 8);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size);
	return (0);
}
*/
/*
int	main(void)
{
	char	string[] = "this is a string";
	char	string2[] = "yes";

	ft_strlcpy(string, string2, 2);
	printf("%i, %s", ft_strlcpy(string, string2, 2), string2);
}
*/

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_strlcpy(argv[1], argv[2], get_lenght(argv[1]));
		printf("%i", ft_strlcpy(argv[1], argv[2], get_lenght(argv[1])));
	}
	return (0);
}
*/