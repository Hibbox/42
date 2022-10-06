/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:08:00 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/30 02:38:17 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar( char a)
{
	write(1, &a, 1);
}

void	ft_putstr( char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int  i;

	i = 0;
	if( ac == 2)
	{
		while( av[1][i] != '\0')
		{
			if(av[1][i] == 'a')
			{
				ft_putstr("a");
				break;
			}
			i++;
		}
	}
	else(ac != 1);
	{
		ft_putstr("a");
	}
	ft_putstr("\n");
	return (0);
}
