/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:27:33 by rmondong          #+#    #+#             */
/*   Updated: 2022/10/03 00:16:32 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else if (c >= '0' && c <= '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] != '\0' && (str[0] >= 'a' && str[0] <= 'z'))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (check(str[i - 1]) == 1)
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (check(str[i - 1]) == 0)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux;";

	printf("%s \n", str);
	ft_strcapitalize(str);
	printf("apres : %s", str);
}
*/
