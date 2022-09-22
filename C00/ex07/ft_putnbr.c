/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:52:37 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/22 03:51:54 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	my_pow(int n, int p)
{
	if (n == 0)
	{
		return(1);
	}

	return(my_pow(n, p -1) * n);
}

void	ft_putnbr(int nb)

{
	char	i;
	int	nb_test;
	char	nbr;
	char	moins;
	
	moins = '-';
	i = 0;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 12);
		return;
	}
	if (nb < 0)
	{
		write(1, &moins, 1);
		nb = -nb;
	}
	nb_test = nb;
	while (nb_test > 9) 
	{
		nb_test = nb_test / 10;
		i++;
	}
	while (i > 9)
	{
		nbr = (nb / my_pow(10,i)) % 10 + 48;
		write (1, &nbr, 1);
		i--;
	}
}

int main()
{
	ft_putnbr(100);
}
