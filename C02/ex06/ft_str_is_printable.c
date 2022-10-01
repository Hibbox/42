/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:55:03 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/01 02:27:28 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 && str[i] > 126)
			return (0);
		if (str[i] == '\0')
			return (1);
		i++;
	}
	return (1);
}

/*
int main()
{
        char str[] = ;

        printf("%d", ft_str_is_printable(str));
        
}
*/
