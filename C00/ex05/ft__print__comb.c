/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__print__comb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:57:45 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/16 11:13:32 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
void	ft_print_number(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);

}

void 	ft_print_comb(void)
{
	char 	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a < '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_print_number(a, b, c);
				write(1, ", ", 2);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	ft_print_number(a, b, c);
}
int main (void)
{
	ft_print_comb();
}
