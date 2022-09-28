/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:42:54 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/27 22:52:20 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = 0;
	temp = *b;
	*b = *a;
	*a = temp;
}
/*
void main()

{
	int a = 42;
	int a_bis = 24;
	
	printf("la valeur de a est %d\n",a);
	printf("la valeur de a_bis est %d\n",a_bis);

	ft_swap(&a, &a_bis);


	printf("la valeur de a a changer a %d\n",a);
	printf("la valeur de a_bis a changer a %d\n",a_bis);
}
*/
