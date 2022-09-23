/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:14:20 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/23 12:15:30 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}


void	ft_putstr(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while(str[i] != '\0')
	{
	
		write(1, &str[i],1);
		if(i < ft_strlen(str) - 1)
		{
		write(1, ",", 1);
		}
		i++;
	}

}

/*
int	main()
{
	char *chaine;

	chaine = "adam";

	ft_putstr(chaine);
}*/
