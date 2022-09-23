/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmondong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:45:22 by rmondong          #+#    #+#             */
/*   Updated: 2022/09/22 20:46:05 by rmondong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] && s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	char	str[] = "rrr";
	char	str2[] = "rrr";

	printf("%d",ft_strcmp(str,str2));
}
