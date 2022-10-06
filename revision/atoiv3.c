/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiv3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:52:49 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/06 12:41:07 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	ret;

	i = 0;
	sign = 1;
	ret = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while(str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if( str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	return (ret * sign);

}

int main ()
{
	printf("%d", ft_atoi("--++--+1234"));
}
