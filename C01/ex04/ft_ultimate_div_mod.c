/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:59:58 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/27 23:12:09 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	nb;
	int	nb2;

	nb = *a;
	nb2 = *b;
	*a = nb / nb2;
	*b = nb % nb2;
}
/*
int main()
{
	int a = 53;
	int b = 10;
	

	ft_ultimate_div_mod(&a, &b);

	printf("le quotient vaux : %d \n", a);
        printf("le reste vaux : %d \n", b);
}
*/
