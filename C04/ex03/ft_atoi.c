/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 02:06:13 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/25 04:53:53 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	long 	i;
	long	Ret;
	long	nbr;
	int	sign;
	int	count;

	i = 0;
	Ret = 0;
	sign = 0;
	
	while(str[i] != '0' && str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
	{
		i++;
	}	
	
	while (str[i] != '\0' && str[i] == '-')
	{
		sign++;
		i++;
	}
	if (str[i] == '+') 
		i++;
	
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		Ret = Ret * 10 + str[i] - '0';
			i++;
	}
	if( sign == 1)
		return (-Ret);

	return (Ret);
}

int main(int ac, char **av)

{
	int 	moi;

	if(ac == 2)
	{
		moi = ft_atoi(av[1]);
		printf("%d", moi);
	}
}
