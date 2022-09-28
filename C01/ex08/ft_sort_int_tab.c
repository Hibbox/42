/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:16:50 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/28 14:05:19 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				j++;
			}
			j++;
		}
		i++;
	}
}

/*
int main()
{
	int	chaine[] = {18, 68, 45, 58, 13, 0};
	int	i;
	int	size;
	
	i = 0;
	size = 6;
	ft_sort_int_tab(chaine, size);
	while (chaine[i] < size)
	{
	printf("[");
	printf("apres : %d", chaine[i]);
	printf("]");
	i++;
	}
}
*/
