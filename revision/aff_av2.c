/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_av2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:43:48 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/30 00:46:51 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

int	main( int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] == 'a')
			{
				ft_putstr("a");
				break;
			}
			i++;
		}
	}
	else if (ac == 1)
	{
		ft_putstr("a");

	}
	ft_putstr("\n");
	return (0);
}
