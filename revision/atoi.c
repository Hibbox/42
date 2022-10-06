* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:28:57 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/05 10:12:21 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	Ret;

	i = 0;
	sign = 1;
	Ret = 0;
	while(str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while(str[i] && ((str[i] == '-' || str[i] == '+')))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		Ret *= 10;
		Ret += str[i] - '0';
		i++;
	}
	return (sign * Ret);
}
int main()
{
	printf("%d", ft_atoi("\0 1"));
}
