/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:13:00 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/14 21:24:42 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	a;
	char	z;

	a = 97;
	z = 122;
	while (z >= a)
	{
		write(1, &z, 1);
		z--;
	}
}

int	main(void)

{
	ft_print_alphabet();
}
