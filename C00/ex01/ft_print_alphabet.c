/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:55:59 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/14 21:16:26 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	a;
	char	z;

	a = 97;
	z = 122;
	while (a <= z)
	{
		write(1, &a, 1);
		a++;
	}
}
