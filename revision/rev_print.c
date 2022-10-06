/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:10:25 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/06 20:19:16 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_revprint(char *str)

{
	int	i;

	i = 0;
	while(str[i])
		i++;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return ;
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if(ac == 2)
	{
		ft_revprint(av[1]);
	}
}
