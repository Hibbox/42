/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:59:41 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/04 02:13:09 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int	n;

	n = 1;
	while (n < ac)
	{
		write(1, av[ac - n], ft_strlen(av[ac - n]));
		write(1, "\n", 1);
		n++;
	}
}
