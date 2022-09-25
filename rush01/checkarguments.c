/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarguments.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:22:30 by mpeulet           #+#    #+#             */
/*   Updated: 2022/09/24 17:58:20 by mpeulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int	checkarguments(int ac, char *av)
{
	int	i;

	if (ac != 2)
		return (0);
	if (ft_strlen(av) != 31)
		return (0);
	i = 0;
	while (av[i])
	{
		if (i % 2 == 0 && (!(av[i] >= '1' && av[i] <= '4')))
			return (0);
		else if (i % 2 == 1 && av[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
