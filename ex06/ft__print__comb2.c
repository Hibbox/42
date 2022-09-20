/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__print__comb2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:15:05 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/16 11:38:40 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char a)
{
	write(1, &a, 1);
}


void ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = a + 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			ft_putchar(32);
			ft_putchar(b / 10 + '0');
                        ft_putchar(b % 10 + '0');
			if(a == 98 && b == 99)
                        {
                                return;
                        }

			ft_putchar(44);
			ft_putchar(32);
			b++;	
		}
	a++;
	b = a + 1;

}
}

int main()
{
	ft_print_comb2();
	return 0;
}
