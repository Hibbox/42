/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:55:03 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/29 13:12:22 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 && str[i] > 127)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
        char str[] = "qet";

        printf("%d", ft_str_is_printable(str));
        
}
*/
