/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:52:37 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/22 17:39:41 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_putnbr(int nb)

{
	char	moins;

	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 12);
		return ;
	}
	if (nb < 0)
	{
		write(1, &moins, 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/*int	main(void)
{
	ft_putnbr(100);
}*/
