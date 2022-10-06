/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 02:06:13 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/06 18:04:51 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi( char *str)
{
	int	i;
	int	ret;
	int	sign;

	i = 0;
	ret = 1;
	sign = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' ')))
	{
		i++;
	}	
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return (ret * sign);
}
/*
int main(int ac, char **av)

{
	int 	moi;

	if(ac == 2)
	{
		moi = ft_atoi(av[1]);
		printf("%d", moi);
	}
}
*/
