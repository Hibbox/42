/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:45:27 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/06 17:27:37 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
	}
	return ;
}
void rot13(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'n') || (str[i] >= 'm' && str[i] <= 'z'))
		{
			str[i] += 13;
		}
			
		else if ((str[i] >= 'A' && str[i] <= 'N') || (str[i] >= 'M' && str[i] <= 'Z'))
		{
			str[i] -= 13;
		}
		i++;
	}
		
}

int main (int ac, char **av)
{
	int	i;
	int	rot;

	i = 0; 
	if( ac == 2)
	{
		rot13(av[1]);
		while(av[1][i])
		{
			write(1, &av[1][i],1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
