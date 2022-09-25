/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:10:32 by mpeulet           #+#    #+#             */
/*   Updated: 2022/09/25 20:20:36 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"
#include <stddef.h>
#include <stdlib.h>


int	main(int ac, char **av)
{

	int **tab;
	int	**tab_sol;
	int i = 0;
	
	tab_sol = ft_tab_sol(av);
	tab = malloc(4 * sizeof(int *));
	while(i < 4)
	{
		tab[i] = malloc(4 * sizeof(int));
		i++;	
	}
	ft_print_tab(tab);
	--i;
	while (!ft_valid_is_good(tab, 0))
	{

	}
	ft_print_tab(tab);
	while(i > -1)
        {
		tab[i] = malloc(4 * sizeof(int));
		free (tab[i]);
                i--;
        }
	free(tab);
	return (0);
}	
