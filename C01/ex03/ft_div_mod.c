/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:15:49 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/27 22:54:35 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()

{
	int a;
	int b;

	a = 53;
	b = 10;
	int c = 0;
	int d = 0;

	ft_div_mod(a, b, &c, &d);

	printf("le quotient vaux : %d \n", c);
	printf("le reste vaux : %d \n", d);

}
*/
