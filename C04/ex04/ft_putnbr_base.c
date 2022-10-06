/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:12:44 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/06 14:34:48 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_len_base(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_len_base(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	size_base;
	long int	nb;

	nb = (long int)nbr;
	size_base = ft_len_base(base);
	if (checkbase(base) == 0)
		return ;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb / size_base > 0)
	{
		ft_putnbr_base(nb / size_base, base);
		ft_putchar(base[nb % size_base]);
	}
	else
	{
		ft_putchar(base[nb % size_base]);
	}
}
/*
int	main()
{
	ft_putnbr_base(25, "01");
}
*/
