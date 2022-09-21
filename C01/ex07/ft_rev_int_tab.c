/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:45:03 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/20 17:24:45 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = size-1;
	while(i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

int main()
{
	int tab[] = {85,86,87,88,89};

	int i;
	int size = 5;

	ft_rev_int_tab(tab,size);
	i = 0;
	printf("[");
	while(tab[i] != tab[size])
	{
		printf("%d", tab[i]);
		if(i != size-1)
		{
			printf(",");
		}
		i++;
		
	}

	
	printf("]");


}
